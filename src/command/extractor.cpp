#include <iostream>
#include <opencv2/opencv.hpp>

#include "extractor.h"
#include "detector.h"
#include "matcher.h"

using namespace cv;

namespace Command {
int Extractor::detectObject(int argc, char *argv[]) {

  Mat img_scene = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);
  Mat img_object = imread(argv[2], CV_LOAD_IMAGE_GRAYSCALE);

  if (!img_scene.data || !img_object.data) {
    std::cout << "Error reading images " << std::endl;
    return -1;
  }

  Detector *scene_detector = new Detector(img_scene, 400);
  scene_detector->detect();

  Detector *object_detector = new Detector(img_object, 400);
  object_detector->detect();

  // Detect matches between images

  Matcher *matcher = new Matcher(scene_detector, object_detector);
  matcher->match();

  printf("Max dist : %f \n", matcher->max_dist);
  printf("Min dist : %f \n", matcher->min_dist);


  // Draw good matches
  Mat img_matches;
  drawMatches(img_scene, scene_detector->keypoints, img_object, object_detector->keypoints,
              matcher->good_matches, img_matches, Scalar::all(-1), Scalar::all(-1),
              std::vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);


  // Show detected matches
  imshow("Good Matches", img_matches);

  for (int i = 0; i < (int) matcher->good_matches.size(); i++) {
    printf("-- Good Match [%d] Keypoint 1: %d  -- Keypoint 2: %d  \n",
           i,
           matcher->good_matches[i].queryIdx,
           matcher->good_matches[i].trainIdx);
  }

  waitKey(0);

  return 0;
}
}

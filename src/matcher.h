#include <opencv2/opencv.hpp>
#include "detector.h"
#ifndef IDEXTRACTOR_MATCHER_H
#define IDEXTRACTOR_MATCHER_H


class Matcher {
 public:
  Matcher(Detector *scene, Detector *object) : scene_detector(scene), object_detector(object) {}
  void match();
  std::vector<cv::DMatch> matches;
  double max_dist;
  double min_dist;
  std::vector<cv::DMatch> good_matches;
 protected:
  Detector *scene_detector;
  Detector *object_detector;
};


#endif //IDEXTRACTOR_MATCHER_H

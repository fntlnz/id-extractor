#include "matcher.h"

void Matcher::match() {
  cv::FlannBasedMatcher matcher;
  matcher.match(scene_detector->descriptors, object_detector->descriptors, matches);

  max_dist = 0;
  min_dist = 100;

  // Calculate distance between keypoints
  for (int i = 0; i < scene_detector->descriptors.rows; i++) {
    double dist = matches[i].distance;
    if (dist < min_dist) {
      min_dist = dist;
    }
    if (dist > max_dist) {
      max_dist = dist;
    }
  }

  // Calculate good matches
  for (int i = 0; i < scene_detector->descriptors.rows; i++) {
    if (matches[i].distance <= 3 * min_dist) {
      good_matches.push_back(matches[i]);
    }
  }
}


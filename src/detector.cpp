#include "detector.h"

Detector::Detector(cv::Mat img, double hessianThreshold) {
  this->img = img;
  this->opencv_detector = cv::xfeatures2d::SURF::create(hessianThreshold);
}

void Detector::detect() {
  this->opencv_detector->detectAndCompute(this->img, cv::Mat(), this->keypoints, this->descriptors);
}

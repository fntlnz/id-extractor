#include <opencv2/xfeatures2d/nonfree.hpp>

#ifndef IDEXTRACTOR_DETECTOR_H
#define IDEXTRACTOR_DETECTOR_H
class Detector {
 public:
  Detector(cv::Mat img, double hessianThreshold);
  cv::Mat img;
  cv::Mat descriptors;
  std::vector<cv::KeyPoint> keypoints;
  void detect();
 protected:
  cv::Ptr<cv::xfeatures2d::SURF> opencv_detector;
};
#endif //IDEXTRACTOR_DETECTOR_H

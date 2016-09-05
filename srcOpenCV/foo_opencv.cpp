#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "foo_opencv.h"
#include <opencv/cv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>

void FooOpenCV (void){
  std::cout << "This little function proves that your shared library contains OpenCV!" << std::endl;
  std::cout << "It will now create and display a picture of a red square." << std::endl;
  cv::Mat img = cv::Mat(100,100,CV_8UC3,cv::Scalar(0,0,255));
  cv::imshow("Red square (Kremlin, Moscow, Russia)", img );
  std::cout << "Press any key to finish. It works." << std::endl;
  cv::waitKey(0);
}

//
// Created by Dinh Van Nam on 2021/12/25.
//
#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    //read image file
    cv::Mat image = cv::imread(
            "/Users/dinhnambkhn/Desktop/Visual_SLAM/Visual_SLAM_tutorial/ch05/BasicImage/ubuntu.png");
    if (image.empty()) {
        std::cout << "Can not read image file" << std::endl;
        return -1;
    }
    //print w and h channel
    std::cout << "w: " << image.cols << " h: " << image.rows << " channel: " << image.channels() << std::endl;

    //check type of image U8C1 or U8C3
    if (image.type() == CV_8UC1) {
        std::cout << "image is U8C1" << std::endl;
    } else if (image.type() == CV_8UC3) {
        std::cout << "image is U8C3" << std::endl;
    } else {
        std::cout << "image is not U8C1 or U8C3" << std::endl;
        return -1;
    }

    //access pixel
    //show the pixel value at 30,30 channel 0
    std::cout << "pixel value at 30,30 channel 0: " << uint(image.at<uchar>(30, 30, 0)) << std::endl;
    //show the pixel value at 30,30 channel 1
    std::cout << "pixel value at 30,30 channel 1: " << uint(image.at<uchar>(30, 30, 1)) << std::endl;

    //access pixel using pointer for


    cv::Mat img_copy = image.clone();

    cv::Mat img_ref = image;
    //set top left block size 30,30 from 0, 0 to 255
    img_ref(cv::Rect(0, 0, 30, 30)).setTo(255);
    //image show
    cv::imshow("image", img_copy);

    //cv::imshow("image_r", image);

    cv::imshow("img_ref", img_ref);
    cv::waitKey(0);


    return 0;
}


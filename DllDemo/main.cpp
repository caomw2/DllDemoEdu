
#include <string>
#include <iostream>

#include <opencv2/opencv.hpp>

int main(int argc, const char** argv)
{

	std::cout << "Dll Demo." << std::endl;

	int age = 10;

	std::string fileName = "lena.jpg";

	cv::Mat img = cv::imread(fileName, cv::IMREAD_COLOR);

	age += 20;

	std::cout << "age = " << age << std::endl;

	cv::namedWindow("DllDemo", cv::WINDOW_NORMAL | cv::WINDOW_KEEPRATIO);

	cv::imshow("DllDemo", img);

	cv::waitKey(-1);

	cv::destroyAllWindows();

	std::cout << "The End." << std::endl;


	return EXIT_SUCCESS;

}







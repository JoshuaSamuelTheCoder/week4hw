#include <opencv2/opencv.hpp> // how we import opencv2
#include <iostream> // strings

using namespace cv;


int main(int argc, char* argv[])
{

//std: string fileLocation = "image.jpg";

std: string fileLocation = argv[1];

Mat img = imread(fileLocation);


imshow("Here is an amazing picture", img);

waitKey(0);







}

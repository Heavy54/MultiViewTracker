//********************************
// MultiViewTracker Application main file
//********************************

#include "highgui.h"
#include <iostream>
#include "Loader.h"

int main(int argc, char* argv[])
{
	// Will must be given in parameter 
	// Path to sequence
	const std::string path = "X:/MultiViewTracker/Calibrations/test/Foot001DR/Images"; 
	const std::string extension = ".JPG";
	// Number of digits in filename
	const unsigned int num_digits = 4;
	const std::string middle_char = "_";

	/***** Test imread and show image
	Mat image = imread("X:/MultiViewTracker/Calibrations/test/Foot001DR/Images/Camera0_0000.JPG");
	imshow("Test", image);
	waitKey();*/

	Loader loader(path, extension,  num_digits, middle_char);
	
	// Setting of full path for the Loader
	/* For now cam_nr et frame _nr initialized manually
	First zero: camera number
	Second zero : frame number*/
	loader.setFullPath(0,0);
	std::string full_path = loader.getFullPath();

	std::cout << full_path << std::endl;
	system("pause");
}
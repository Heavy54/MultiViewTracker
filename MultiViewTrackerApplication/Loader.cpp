#include "Loader.h"

Loader::Loader(const std::string &path, const std::string &extension, unsigned int num_digits, const std::string &middle_char):
	_path(path), 
	_extension(extension), 
	_num_digits(num_digits),
	_middle_char(middle_char)
{
}


void Loader::setFullPath(unsigned int cam_nr, unsigned int frame_nr)
{
	std::stringstream ss;
    ss << std::setw(_num_digits) << std::setfill('0') << frame_nr;

	std::stringstream ss2;
	// Actually Camera name is set manually
	ss2 << _path << "Camera" << cam_nr << _middle_char << ss.str() << _extension;

	_full_path = ss2.str();
}

const std::string & Loader::getFullPath() const
{
	return _full_path;
}
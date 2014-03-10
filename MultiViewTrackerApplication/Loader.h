///
/// file Loader.h
/// \brief Image Loader
///

#include <iostream>
#include <iomanip>
#include <sstream>

/// \class Loader
///
/// Class put in charge of loading images
/// 
/// The class get all necessary informations and group together
/// to have the full path in the aim of loading images
///
class Loader
{
public:
	///
	/// \brief Constructor
	///
	/// Constructor of Loader class
	///
	/// \param[in] path (const std::string &) : Path of the folder containing images 
	/// \param[in] extension (const std::string &) : Extension of images
	/// \param[in] num_digits (unsigned int) : Number of digits contained in the name of the image (e.g Camera0_0000, num_digits = 4)
	/// \param[in] middle_char (const std::string &) : Character between camera's name and digits
	///
	Loader(const std::string &path, const std::string &extension, unsigned int num_digits, const std::string &middle_char);

	/////// Setters /////////
	///
	/// \brief Setter for the full path of the images
	///
	/// \param[in] cam_nr (unsigned int): ID number of the camera
	/// \param[in] frame_nr (unsigned int): Number of the image to load
	///
	void setFullPath(unsigned int cam_nr, unsigned int frame_nr);

	////// Getters /////////
	///
	/// \brief Getter for the images's full path 
	///
	/// \return A reference to the full path as const string &
	///
	const std::string & getFullPath() const;// const string &?

private:
	const std::string   _path; ///< Base path to the images
	const std::string   _extension; ///< Extension of the images
	unsigned int        _num_digits; ///< Number of digits in the name of the images
	const std::string   _middle_char; ///< Character between the name of the camera and the digits
	std::string         _full_path; ///< Full path to the images with filename and extension

};

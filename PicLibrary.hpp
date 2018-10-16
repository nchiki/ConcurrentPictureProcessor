#ifndef PICLIB_H
#define PICLIB_H

#include <unordered_map>
#include "Picture.hpp"
#include "Utils.hpp"

class PicLibrary {

  private:
    unordered_map<std::string, Picture> loadedPictures;

  public:
  // defaiult constructor/deconstructor
  PicLibrary(){};
  ~PicLibrary(){};

  // command-line interpreter routines
  void print_picturestore();
  void loadpicture(string path, string filename);
  void unloadpicture(string filename);
  void savepicture(string filename, string path);
  void display(string filename);
  inline bool isJPG(string const &filename, string const &ending);
  void exit();
  void rotate90(string filename, Picture *newPic, Picture *oldPic);
  void rotate180(string filename, Picture *newPic, Picture *oldPic);
  void rotate270(string filename, Picture *newPic, Picture *oldPic);
  void flipV(string filename);
  void flipH(string filename);


        // picture transformation routines
  void invert(string filename);
  void grayscale(string filename);
  void rotate(int angle, string filename);
  void flipVH(char plane, string filename);
  void blur(string filename);
};

#endif


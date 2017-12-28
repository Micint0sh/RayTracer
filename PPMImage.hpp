#ifndef PPMIMAGE_HPP
#define PPMIMAGE_HPP

#include "Color.hpp"
#include "Image.hpp"

using namespace std;

class PPMImage : public Image {
private:
    Color** pixels;
public:
    //Constructors
    PPMImage();
    PPMImage(int width, int height);
    //Destructor
    ~PPMImage();
    
    void save(string path);
    void save();
    void setColor(int x,int y,Color& c);
    Color getColor(int x,int y);
};

#endif /* PPMIMAGE_HPP */


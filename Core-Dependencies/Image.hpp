#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <string>
#include "Color.hpp"

class Image {
protected:
    int width;
    int height;
public:
    virtual void save(std::string path) =0;
    virtual void save()=0;
    virtual void setColor(int x,int y,Color& c)=0;
    virtual Color getColor(int x,int y)=0;
};

#endif /* IMAGE_HPP */


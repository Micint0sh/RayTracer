#ifndef FILM_HPP
#define FILM_HPP

#include "Image.hpp"
#include "Sample.hpp"
#include <string>

using namespace std;

class Film {
private:
    Image& image;
    string path;
public:
    //Constructor
    Film(Image& img, string path = "./image.out");
    void commit(Sample& sample, Color& color);
    void writeImage();
};

#endif /* FILM_HPP */


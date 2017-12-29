#include "Film.hpp"
#include "Image.hpp"
#include <string>

using namespace std;


Film::Film(Image& img, string path) : image(img){
    this->path = path;
}

void Film::commit(Sample& sample, Color& color) {
    image.setColor(sample.x,sample.y,color);
}

void Film::writeImage() {
    image.save(path);
}
#include "PPMImage.hpp"
#include "Color.hpp"
#include "Image.hpp"
#include <iostream>
#include <fstream>

using namespace std;

#define DEFAULT_IMAGE_DIMENSION 512
#define MAGIC_NUMBER "P3"
#define MAX_PIXEL_VALUE 255

//Constructors
PPMImage::PPMImage(){
    pixels = new Color*[DEFAULT_IMAGE_DIMENSION];
    for(int i=0;i<DEFAULT_IMAGE_DIMENSION;i++) {
        pixels[i]=new Color[DEFAULT_IMAGE_DIMENSION];
    }
    width = DEFAULT_IMAGE_DIMENSION;
    height = DEFAULT_IMAGE_DIMENSION;
}
    
PPMImage::PPMImage(int width, int height) {
    pixels = new Color*[height];
    for(int i=0;i<height;i++) {
        pixels[i]=new Color[width];
    }
    this->height = height;
    this->width = width;
}

PPMImage::~PPMImage() {
    for(int i=0;i<height;i++) {
        delete pixels[i];
    }
    delete pixels;
}
    
void PPMImage::save(string path) {
    ofstream imageFile(path);
    imageFile << MAGIC_NUMBER << endl;
    imageFile << width << " " << height << endl;
    imageFile << MAX_PIXEL_VALUE << endl;
    for (int i = 0; i < height; i++) {
        for(int j =0; j< width; j++) {
            imageFile << pixels[i][j] << " "; 
        }
        imageFile << endl;
    }
}

void PPMImage::save() {
    PPMImage::save("./out.ppm");
}

void PPMImage::setColor(int x,int y,Color& c) {
    pixels[height-y-1][x] = c;
}

Color PPMImage::getColor(int x,int y){
    return pixels[y][x];
}
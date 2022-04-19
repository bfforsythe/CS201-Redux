#include "std_lib_facilites.h"
#include "CImg.h"
#include <fstream>
#include <cstdio>

using namespace cimg_library;



/*
class ppm {

public:

    const char* ASCII_List = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'. ";

    void ppm2ascii(CImg<> image, const char* file_name, int w, int h)
    {
        // output to out.txt
        std::ofstream out(file_name);

        image.resize(w, h);

        cimg_forY(image, y) {
            cimg_forX(image, x) {
                int val = image(x, y, 0, 0) / sizeof(ASCII_List);
                out << ASCII_List[val];
            }
            out << endl;
        }



    }

};



int main()
{

    CImg<> img("parrot.bmp");
    ppm rgb;
    rgb.ppm2ascii(img, "parrot.txt", 512, 512);
    

} */

//*********************************************************** HW02 A1


/*class ppm {

public:

    const char* ASCII_List = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'. ";

    CImg<> rgb2gray(CImg<> color)
    {


        CImg<> gray_img(color.width(), color.height(), 1, 1, 0);




        cimg_forXY(color, x, y) {


            // Triple Channel

            int R = (int)color(x, y, 0, 0);
            int G = (int)color(x, y, 0, 1);
            int B = (int)color(x, y, 0, 2);

            int gray_val = (int)(0.2126 * R + 0.7152 * G + 0.0722 * B);
            gray_img(x, y, 0, 0) = gray_val;
        }
        return gray_img;
    }
};



int main()
{

    CImg<> img("parrot.bmp");
    ppm rgb;
  CImg<> grayImg = rgb.rgb2gray(img);
    grayImg.save("parrot.pgm");


} */


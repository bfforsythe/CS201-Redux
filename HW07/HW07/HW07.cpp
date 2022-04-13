#include "std_lib_facilites.h"
#include "CImg.h"

// **************************************** HW07



using namespace cimg_library;

const char *ASCII_List = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'. ";

CImg<> rgb2gray(CImg<> color_img)
{
   

    CImg<> gray_img(color_img.width(), color_img.height(), 1, 1, 0);

    


    cimg_forXY(color_img, x, y) {
       

        // Triple Channel

        int R = (int)color_img(x, y, 0, 0);
        int G = (int)color_img(x, y, 0, 1);
        int B = (int)color_img(x, y, 0, 2);

        int gray_val = (int)(0.299 * R + 0.587 * G + 0.114 * B);
        gray_img(x, y, 0, 0) = gray_val;
    }

    gray_img.normalize(0, 255);
    return gray_img;
}


void print_gray2ascii(CImg<> gray_img, const char* file_name, int w, int h)
{
    // output to out.txt
    std::ofstream out(file_name);

    gray_img.resize(w, h);

    cimg_forY(gray_img, y) {
        cimg_forX(gray_img, x) {
            int val = gray_img(x, y, 0, 0) / sizeof(ASCII_LIST);
            out << ASCII_LIST[val];
        }
        out << endl;
    }

    out.close();
}



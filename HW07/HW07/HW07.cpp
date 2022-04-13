#include "std_lib_facilites.h"
#include "CImg.h"
#include <fstream>
#include <cstdio>
// **************************************** HW07



using namespace cimg_library;

const char *ASCII_List = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'. ";

CImg<> rgb2gray(CImg<> color)
{
   

    CImg<> gray_img(color.width(), color.height(), 1, 1, 0);

    


    cimg_forXY(color, x, y) {
       

        // Triple Channel

        int R = (int)color(x, y, 0, 0);
        int G = (int)color(x, y, 0, 1);
        int B = (int)color(x, y, 0, 2);

        int gray_val = (int)(0.299 * R + 0.587 * G + 0.114 * B);
        gray_img(x, y, 0, 0) = gray_val;
    }
    return gray_img;
}


void print_gray2ascii(CImg<> gray_img, const char* file_name, int w, int h)
{
    // output to out.txt
    std::ofstream out(file_name);

    gray_img.resize(w, h);

    cimg_forY(gray_img, y) {
        cimg_forX(gray_img, x) {
            int val = gray_img(x, y, 0, 0) / sizeof(ASCII_List);
            out << ASCII_List[val];
        }
        out << endl;
    }
   

    
}



int main(void)
{


    // Init images
    CImg<> img("parrot.bmp");

    img = rgb2gray(img);

    const char* file_name = "out.txt";
    print_gray2ascii(img, file_name, 100, 40);

    std::ifstream f("out.txt");

    if (f.is_open())
        std::cout << f.rdbuf();

    return 0;

}


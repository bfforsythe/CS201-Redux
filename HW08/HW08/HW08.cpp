#include "std_lib_facilites.h"
#include "CImg.h"
#include <fstream>
#include <cstdio>

using namespace cimg_library;




class ppm {

public:

    const char* ASCII_List = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'. ";

    void ppm2ascii(CImg<> gray_img, const char* file_name, int w, int h)
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

};



int main(void)
{

    CImg<> img("parrot.bmp");
    ppm rgb;
    rgb.ppm2ascii(img, "parrot.txt", 100, 100);
    

}



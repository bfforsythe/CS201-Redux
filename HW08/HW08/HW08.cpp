#include "std_lib_facilites.h"
#include "CImg.h"
#include <fstream>
#include <cstdio>

using namespace cimg_library;




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



int main(void)
{

    CImg<> img("parrot.bmp");
    ppm rgb;
    rgb.ppm2ascii(img, "parrot.txt", 512, 512);
    

}



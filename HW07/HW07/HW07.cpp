#include "std_lib_facilites.h"
/* #include "CImg.h"
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

        int gray_val = (int)(0.2126 * R + 0.7152 * G + 0.0722 * B);
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

} */


//**************************************************************** HW07 A1
/*
#include "CImg.h"
#include <fstream>
#include <cstdio>

using namespace cimg_library;

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

int main(void)
{


    // Init images
    CImg<> img("parrot.bmp");

    img = rgb2gray(img);
    img.display();

    return 0;
} */


//******************************************************************** HW 07 A3

// Caesar Cipher

void cipher(int steps) {

    string input;
    int stepsRemaining = 0;
    

    while (input != "END") {
        getline(cin, input);
 
        for (int i = 0; i < input.size(); i++) {
            char indvLetter;

            indvLetter = input.at(i);
            

            if (indvLetter >= 'A' && indvLetter <='z' ) {

                if (indvLetter >= 'x') {
                    indvLetter = indvLetter -26;
                }
                indvLetter = indvLetter + steps;
                cout << indvLetter;
            }
            else {
                cout << indvLetter;
            }
            

        }

    }

}

int main() {

    cout << " ! Cesar Cipher ! " << endl;

    cout << " Please enter a string to cipherize: ";
    // int inside cipher() gives number of steps.

    cipher(3);

}
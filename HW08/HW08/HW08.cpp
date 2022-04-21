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

//*********************************************************** HW08 A1


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

// ***************************************************** HW08 A2


#include <algorithm>


int main() {

	
    unsigned int w = 960;
    unsigned int h = 540;

    char black[] = { 0,0,0 };

    CImg<unsigned char> hangman(w, h, 1, 3, 255);
   
    for (int i = 290; i <= 681; i++) {
        hangman.draw_point(i,300, black);
        hangman.draw_point(597 - i / 5, 100, black);
    }
    for (int j = 100; j <= 300; j++) {
        hangman.draw_point(539, j, black);
        hangman.draw_point(460, 160 - j/ 5, black);

    }
    
    //hangman.display();
    CImgDisplay hdisp(w, h, "Hangman", 0);

    hdisp.display(hangman);

    std::map<int, string> words;

	words.insert(std::pair<int, string>(0, "sweaty"));
	words.insert(std::pair<int, string>(1, "crispy"));
	words.insert(std::pair<int, string>(2, "splint"));
	words.insert(std::pair<int, string>(3, "ocean"));
	words.insert(std::pair<int, string>(4, "hydrant"));
	words.insert(std::pair<int, string>(5, "hamburg"));

	// Pulls a random word out of the map above

	srand(time(0));

	int wordPicker = rand() % 5;
	string guessed = words.at(wordPicker);

	// Creates a vector that splits string into chars

	vector<char> ansVec(guessed.begin(), guessed.end());


	// Checking

	vector<char> savedVec;
	int gameOver = 0;
    

	for (int i = 0; i < ansVec.size(); i++) {
		savedVec.push_back('_');
	}

	cout << ansVec.size();

	while (savedVec != ansVec && gameOver != 6) {

        bool doesntExist = false;

		char letterGuess;
		cin >> letterGuess;

        for (int i = 0; i < ansVec.size(); i++) {
            if (letterGuess == ansVec.at(i)) {
                savedVec[i] = letterGuess;
                doesntExist = true;
            }
            cout << savedVec.at(i);
            cout << " ";
        }

        if (!doesntExist) {
            gameOver++;
        }
        switch (gameOver) {
        case 1:
            hangman.draw_circle(460, 150, 10, black);
            hdisp.display(hangman);
            break; 
            
        case 2:
            for (int i = 139; i <= 180; i++) {
                hangman.draw_point(460, i, black);
            }
            hdisp.display(hangman);
            break;
        case 3:
            for (int i = 450; i < 460; i++) {
                hangman.draw_point(i, 165, black);
            }
            hdisp.display(hangman);
            break;         
        case 4:
            for (int i = 460; i < 470; i++) {
                hangman.draw_point(i, 165, black);
            }
            hdisp.display(hangman);
            break;
        case 5:
            hangman.draw_point(460, 180,black);
            hangman.draw_point(459, 181, black);
            hangman.draw_point(458, 182, black);
            hangman.draw_point(457, 183, black);
            hangman.draw_point(456, 184, black);
            hangman.draw_point(455, 185, black);
            hdisp.display(hangman);
            break;
        case 6:
            hangman.draw_point(461, 180, black);
            hangman.draw_point(462, 181, black);
            hangman.draw_point(463, 182, black);
            hangman.draw_point(464, 183, black);
            hangman.draw_point(465, 184, black);
            hangman.draw_point(466, 185, black);
            hdisp.display(hangman);
            hdisp.wait(1000);
            break;
        }
	}

	cout << "\n The answer was: " << guessed;


}


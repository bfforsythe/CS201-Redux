#pragma once

#ifndef HW04.h

#include "std_lib_facilites.h"

// Functionality for Sorting


bool isNumber(const string& str)
{
    return str.find_first_not_of("0123456789") == string::npos;
}

void AnalyzeTokens() {

    vector<string> token;
    string str;
    while (str != "END") {

    getline(cin, str);

    std::istringstream input(str);



        while (input >> str) {

            token.push_back(str);


        }
        token.push_back(" ");
    }

    for (int i = 0; i < token.size(); i++) {

        if (token.at(i) == "+" || token.at(i) == "-" || token.at(i) == "*" ||
            token.at(i) == "/" || token.at(i) == "," || token.at(i) == ";" || token.at(i) == ">" ||
            token.at(i) == "<" || token.at(i) == "=" || token.at(i) == "(" || token.at(i) == ")" ||
            token.at(i) == "[" || token.at(i) == "]" || token.at(i) == "{" || token.at(i) == "}") {
            cout << "{Special Character} " << token.at(i) << "\n";
        }

        //**************************************************************************************************

        else if (token.at(i) == "+" || token.at(i) == "-" || token.at(i) == "*" ||
            token.at(i) == "/" || token.at(i) == ">" || token.at(i) == "<" ||
            token.at(i) == "==") {
            cout << "{Special Character} " << token.at(i) << "\n";
        }

        // ************************************************************************************************



        else if (isNumber(token.at(i))) {
            cout << "{Integer} " << token.at(i) << "\n";

        }


      /*  else if (token.at(i) == "0" || token.at(i) == "1" || token.at(i) == "2" ||
            token.at(i) == "3" || token.at(i) == "4" || token.at(i) == "5" ||
            token.at(i) == "6" || token.at(i) == "7" || token.at(i) == "8" ||
            token.at(i) == "9") {
            cout << "{Integer} " << token.at(i) << "\n";
        } */

        //************************************************************************************************
        
        else if (token.at(i) == " ") {
            cout << "{Whitespace} " << token.at(i) << "\n";
        }

        else {
            cout << "{String} " << token.at(i) << "\n";
        }



    }
  
}



#endif
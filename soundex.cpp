
#include <iostream>
#include <string>


int main() {
    std::string in, out;
    std::cin >> in; // input string
    out += in[0]; // add first letter to output string
    in.erase(0, 1); // erase first char in input string
    int pos = 0;

    // create strings to check char similarity
    std::string one = "bfpv", two = "cgjkqsxz",
    three = "dt", four = "l", five = "mn", six = "r";

    // filling in the output vector
    for (char c : in) {
        if (one.find(c) != std::string::npos && out[pos] != '1') {
            out += "1";
            pos++;
        } else if (two.find(c) != std::string::npos && out[pos] != '2') {
            out += "2";
            pos++;
        } else if (three.find(c) != std::string::npos && out[pos] != '3') {
            out += "3";
            pos++;
        } else if (four.find(c) != std::string::npos && out[pos] != '4') {
            out += "4";
            pos++;
        } else if (five.find(c) != std::string::npos && out[pos] != '5') {
            out += "5";
            pos++;
        } else if (six.find(c) != std::string::npos && out[pos] != '6') {
            out += "6";
            pos++;
        }
    }

    // if length of the output vector is less than 4, we will fullfill it with zeros
    while (out.length() < 4) {
        out += "0";
    }

    std::cout << out.substr(0, 4);

    return 0;
}
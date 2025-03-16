//              Project 1 Text Packing/Unpacking operations
//
//
//   Description:
//      This program reads a text document, “packs” the ASCII characters
//      from that document into unsigned int variables, and outputs those variables
//      to another text file as integers.
//      This program also reverses the process, converting the unsigned int numbers
//      back into a copy of the original text document.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void packing();
void unpacking();
void support();

int main() {
    char command;
    bool run = true;
    while(run) {
        cout << "Press a key for a function. Need help? Press h" << endl;
        cin >> command;
        if (command == 'h') {
            support();
        } else if (command == 'p') {
            packing();
        } else if (command == 'u') {
            unpacking();
        } else if (command == 'q') {
            run = false;
        } else {
            cout << "please press h for help" << endl;
        }
    }

  return 0;

}

void support() {
    cout << "p: Build Packed Data File" << endl;
    cout << "u: Create unpacked (text) data from packed data." << endl;
    cout << "h: Print this help text" << endl;
    cout << "q: Exit the program" << endl;
}
void packing(){
    string inputfile, outputfile;
    cout << "Enter you input file: " << endl;
    cin >> inputfile;
    cout << "Entern you output file:" << endl;
    cin >> outputfile;
    fstream file;
    ofstream file1(outputfile);
    string output;
    int line;
    file.open(inputfile);
    if (!file1.is_open()) {
        cout << "Error: Could not create output file " << outputfile << endl;
    } else {
        while(file >> line) {
            output += (char) line;
        }
    }
    file1 << output << endl;
    file.close();
    file1.close();
}
void unpacking() {
    string inputfile, outputfile;
    cout << "Enter you input file: " << endl;
    cin >> inputfile;
    cout << "Entern you output file:" << endl;
    cin >> outputfile;
    fstream file;
    ofstream file1;
    string output;
    int line;
    file.open(inputfile);
    file1.open(outputfile);
    if (!file1.is_open()) {
        cout << "Error: Could not create output file " << outputfile << endl;
    } else {
        while(file >> line) {
        char out = line;
        output += out;
        }
    }
    file1 << output <<endl;
    file.close();
    file1.close();
}

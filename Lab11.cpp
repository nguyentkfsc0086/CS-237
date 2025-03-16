//
// Created by Nguyen Tran on 3/16/25.
//

#include <cstdlib>
#include <iostream>
using namespace std;
struct MovieData;
void displayMovie(MovieData *moviePtr);
void populateMovieDataArray(MovieData *arrayPtr, int arraySize);
void displayMovieDataArray(MovieData *arrayPtr, int arraySize);
MovieData *findLongestMovie(MovieData *arrayPtr, int arraySize);
struct MovieData {
public:
    string title, director;
    int yearRelease;
    double runningTime;
};
int main() {
    int storage;
    cout<<"How many movie do you want to add? " << endl;
    cin >> storage;
    MovieData *data = new MovieData[storage];
    cout << "Address of the array: " << data << endl;
    populateMovieDataArray( data,storage);
    displayMovieDataArray(data,storage);
    cout << "The longest movie is: " << endl;
    displayMovie(findLongestMovie(data,storage));
    delete[] data;
    cout << "delete data succesfully" << endl;

    return 0;
}


void displayMovie(MovieData *moviePtr) {
    cout << "Title: " << moviePtr->title << endl;
    cout << "Director: " << moviePtr->director << endl;
    cout << "Year release: " << moviePtr->yearRelease << endl;
    cout << "Running time: " << moviePtr->runningTime << endl;
}
void populateMovieDataArray(MovieData *arrayPtr, int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        cout << "Enter the title of the movie: ";
        cin >> arrayPtr->title;
        cout << "Enter the director of the movie: ";
        cin >> arrayPtr->director;
        cout << "Enter the year release of the movie: ";
        cin >> arrayPtr->yearRelease;
        cout << "Enter the running time of the movie: ";
        cin >> arrayPtr->runningTime;
        arrayPtr ++;
    }
}
void displayMovieDataArray(MovieData *arrayPtr, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << "Hexadecimal Address of the struct: " << arrayPtr << endl;
        displayMovie(arrayPtr);
        arrayPtr++;
    }
}
MovieData *findLongestMovie(MovieData *arrayPtr, int arraySize) {
    double maxLength = arrayPtr[0].runningTime;
    MovieData *maxMovie = &arrayPtr[0];
    for(int i = 1; i < arraySize; i++) {
        if (arrayPtr[i].runningTime > maxLength) {
            maxMovie = &arrayPtr[i];
        } else {
            continue;
        }
    }
    return maxMovie;
}

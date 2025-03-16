//
// Created by Nguyen Tran on 3/1/25.
//
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int getLowest(int array[], int size);
int getHighest(int array[], int size);
int getSum(int array[], int size);
float getMedian(int array[], int size);
int main(){
      const int ARRAY_SIZE = 100;
      int array[ARRAY_SIZE];
      int line;
      string input;
      ifstream file;
      cout << "Enter the file you want to read: ";
      cin >> input;
      file.open(input);
      int loop = 0;
      if(file.is_open()) {
        while(file >> line ) {
          array[loop] = line;
          loop++;
        }
      } else {
        cout << "Could not open the file " << endl;
        return 1;
      }
      int newArray[loop];
      for(int i = 0; i < loop + 1; i++) {
          newArray[i] = array[i];
      }

      cout << "The highest value of the array is: " << getHighest(newArray, loop) << endl;
      cout << "The lowest value of the array is: " << getLowest(newArray, loop) << endl;
      cout << "The value of the sum of the array is: " << getSum(newArray, loop) << endl;
      cout << "The median value of the array is: " << getMedian(newArray, loop) << endl;






  }
 int getLowest(int array[], int size){
   int lowest;
   lowest = array[0];
   for(int i = 1; i < size; i++){
     if(array[i] < lowest){
       lowest = array[i];
     }

   }
   return lowest;
 }
int getHighest(int array[], int size){
  int highest;
  highest = array[0];
  for(int i = 1; i < size; i++){
    if(array[i] > highest){
      highest = array[i];
    }

  }
  return highest;
}
int getSum(int array[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += array[i];
    }
    return sum;
}
float getMedian(int array[], int size){
  int sum = getSum(array, size);
  return sum/size;
}


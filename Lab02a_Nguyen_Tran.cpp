#include <iostream>
using namespace std;

int main()
{
    //Declare the variables
    float lastfilup;
    float prevfilup;
    float gallons;
    //Prompt users to enter the informations needed
    cout<<"Please enter odometer at the lastest fill up: ";
    cin>>lastfilup;
    cout << "Please enter the odometer at the previous fill up: ";
    cin>>prevfilup;
    cout << "Enter the amount of gas that you purchase at the lastest fill up: ";
    cin>>gallons;
    //Print our the result
    //I did not assign the distance to a variable because I feel like doing like this is more convenience
    cout << "The number of gallons per mile is: " << (lastfilup - prevfilup) / gallons << endl;
    return 0;
}

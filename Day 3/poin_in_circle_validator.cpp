#include <iostream>
#include <cmath>
using namespace std; //This is so you don't have to keep mentioning `std` all the time.

bool operation(double x, double h, double y, double k, double r)
{
    
    bool result=((pow(x-h,2))+(pow(y-k,2)))==(pow(r,2));

    return result;
}

int main() {
    double x = 8.0;
    double y = 4.0;
    double h = 3.0;
    double k = 4.0;
    double r = 5.0;

    if (operation(x, h, y, k, r)) {
        cout << "The point is on the circle." << endl;
    } else {
        cout << "The point is not on the circle." << endl;
    }

    
    return 0;
}
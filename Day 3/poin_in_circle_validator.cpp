#include <iostream>
#include <cmath>
using namespace std; //This is so you don't have to keep mentioning `std` all the time.

bool operation(double x, double h, double y, double k, double r)
{
    
    bool result=((pow(x-h,2))+(pow(y-k,2)))==(pow(r,2));

return result;
}

$(x - h)^2 + (y - k)^2 = r^2$.
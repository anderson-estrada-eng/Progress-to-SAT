#include <iostream>
#include <cmath>

using namespace std;

double calculateMaxDistance(double h, double k, double r) {
    double distanceToCenter = sqrt((h * h) + (k * k));
    return distanceToCenter + r;
}

int main() {
    double h = 3.0;
    double k = 4.0;
    double r = 5.0;
    
    double maxDistance = calculateMaxDistance(h, k, r);
    
    cout << "The maximum distance to the circle is: " << maxDistance << endl;
    
    return 0;
}
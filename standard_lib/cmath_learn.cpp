#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double x;
    cout << "Enter value to calculate its floor : ";
    cin >> x;
    double result = floor(x);
    cout << "Floor of " << x << " is " << result << endl;
    return 0;
}
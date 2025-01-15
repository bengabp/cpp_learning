#include <iostream>
using namespace std;

int convert_f_to_c(double temp){
    return (temp - 32) * 5/9;
}

int main () {
    cout << "Enter your name : ";
    string name; // declare a variable to store the input name
    cin >> name; // get the input from the user
    cout << "Your name is : " << name << endl;
    cout << convert_f_to_c(3.4);
    return 0;
}
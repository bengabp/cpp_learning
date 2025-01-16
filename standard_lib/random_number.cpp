#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main () {

    // Generate a random number
    srand(time(0));
    int random_number = rand() % 10;

    cout << "Random number : "
        << random_number << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <deque>
#include <string>

std::string dequeToString(std::deque<short> deque){
    /* Merges all elements in a deque to one string */

    std::string resultString = "";
    for (int i=0; i<deque.size(); i++) { // Iterate through the deque, convert each element to string and concat to resultString
        resultString += std::to_string(deque[i]);
    }
    return resultString;
}

std::deque<short> decimalToBinary(short decimalNumber) {
    int reminder = 2;
    int number = decimalNumber;
    int quotient = 0;
    std::deque<short> remindersQueue; // This allows pushing the reminders to the front

    while (reminder > 1 ) {
        quotient = number / 2;
        reminder = number - (quotient * 2); // Calculate reminder by subtracting the product of quotient and 2 from the current number
        remindersQueue.push_front(reminder); // Append reminder to the front of the queue
        number = quotient; // Update the value of number so that it can be used in the next iteration
    }
    return remindersQueue;
}

int main () {
    short decimalNumber;
    std::cout << "Enter decimal number to convert to binary: ";
    std::cin >> decimalNumber;
    std::deque resultBinary = decimalToBinary(decimalNumber);
    std::cout << "Decimal [" << decimalNumber << "] - Binary " 
                        << "= " << dequeToString(resultBinary) << std::endl;
    return 0;
    
}
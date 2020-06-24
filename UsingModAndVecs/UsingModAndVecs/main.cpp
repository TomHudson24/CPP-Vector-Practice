#include <vector>
#include <iostream>

/// Using vectors to create a list of numbers and showing how modulo can produce a quick output of even numbers.
int main()
{
    //create variables
    std::vector<int> numbers = { 2, 4, 3, 6, 1, 9, 15, 30, 100, 48, 33, 66, 97, 44, 24};
    int totalSum = 0;
    int totalProduct = 1;


    //check if even and sum them (add them together)
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            //sum them
            totalSum += numbers[i];
        }
        else {
            totalProduct *= numbers[i];
        }
    }

    //print out the values 
    std::cout << "Length of the list is " << numbers.size() << "\n";
    std::cout << "Sum of even numbers is " << totalSum << "\n";
    std::cout << "Product of odd numbers is " << totalProduct << "\n";

    return 0;
}
#include <iostream>

int add(int, int);

int main() {
    int x, y;
    std::cout << "Enter 2 numbers:" << std::endl;
    
    std::cin >> x; // first inputted number is assigned to x
    std::cin >> y; // second inputted number is assigned to y
    
    std::cout << "You typed in: " << x << " and " << y; // tell user what they have inputted
    
    // tell user what the value is if both numbers are added
    std::cout << "Added: " + add(x, y) << std::endl;
}

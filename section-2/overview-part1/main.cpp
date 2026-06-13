#include <iostream>
#include <string>
#include <vector>

int main () {
    int x {7};  // Equivalent to int x (7)
    std::string str {"Let us begin"}; // Equivalent to string str("Let us begin")


    std::cout << "x = " << x << "\n";
    std::cout << "str = " << str << "\n";


    // Narrowing converstions are not allowed 
    int y = 7.7;  // Legal, although compiler may warn
    //int y {7.7};  // Illegal 


    // Can be used with compound types and multiple inital values
    std::vector<int> vec {4, 2, 3, 5, 1}; 

    std::cout << "Vec = ";

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << ", ";
    }

    std::cout << "\n";

    return 0;
}
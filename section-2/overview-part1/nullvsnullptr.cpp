#include <iostream>

void func (int i) {std::cout << "func(int) called\n";}

void func (int* i) {std::cout << "func(int*) called\n";}

int main () {

    
    func(NULL); // Calls func(int* i) with clang
                // Calls func(int i) with VC++
                // Does not compile with gcc 


    func(nullptr); // Calls func(int* i) as expected

    return 0;
}
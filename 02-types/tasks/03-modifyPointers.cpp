#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?

void bar(int* const ptr);
void foo(int* const ptr);

int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}

//we can use simple pointer OR const ptr to modyfie values
void bar(int* const ptr) {
    *ptr = 20;
}
void foo(int* const ptr) {
    *ptr = 10;
}
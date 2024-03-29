#include <iostream>

int main()
{
    int val = 10;

    /*
    Define a pointer that hold the address of variable "val"
    "&" is the "address-of" operator
    */
    int *p = &val;

    /*
    Note that the value of a pointer is the address of
    the variable it points to.
    */
    std::cout << "Address of val: " << &val << std::endl;
    std::cout << "Value of pointer p:" << p << std::endl;

    /*
    Get the value of the variable the pointer "p" points to.
    */
    std::cout << "Value of the variable the pointer p points to is ";
    std::cout << *p << std::endl;

    /*
    Change value of "val" by using the pointer "p"
    */
    *p = 100;
    std::cout << "Vaule of val is changed to " << val << std::endl;

    /*
    It is a good practice to define a NULL pointer if we do not where the pointer points to
    There are 3 ways to define a null pointer as follows:
    */
    int *p_1 = NULL;
    int *p_2 = nullptr;
    int *p_3 = 0;

    return 0;
}

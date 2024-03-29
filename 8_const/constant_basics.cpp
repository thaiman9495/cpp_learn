#include <iostream>

int main()
{
    /*
    Define a constant of the type "int"
    */
    const int buffer_size = 256;

    /*
    const int buffer_size; will not work because we must assign a
    value to a constant at compile time.
    */
    
    /*
    buffer_size = 25; will not work because vlaue of a const object
    can not be changed.
    */

    std::cout << buffer_size;
}

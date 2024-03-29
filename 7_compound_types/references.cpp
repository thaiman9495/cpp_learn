#include <iostream>

int main()
{
    /*
    Define a int variable named "val" with the initial value of 1024
    */
    int val = 1024;

    /*
    Initialize a reference bound to "val"
    */
    int &ref_val = val;

    /*
    int &ref_val_1; will not work because when a reference
    is declared it must be bound to an already existing object
    of the same type. 
    */

    std::cout << "val = " << val << std::endl;
    std::cout << "ref_val =" << ref_val << std::endl;

    /*
    Changing the value of a referen is actually changing the value
    of the object is bound to.
    */
    ref_val = 10;
    
    std::cout << "val = " << val << std::endl;
    std::cout << "new ref_val =" << ref_val << std::endl;
}

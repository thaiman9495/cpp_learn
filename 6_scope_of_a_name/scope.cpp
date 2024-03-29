#include <iostream>

/*
This progam defines four names: my_function, main, sum, val
*/

/*
Decleration of the "my_function".
The name "my_function" is defined outside any curly braces,
so it has a global sope.
*/
void my_function();

/*
"main" is defined outside any curly braces, thus it has "global scope".
*/
int main()
{
    /*
    "sum" is defined within the scope of the block that is the body of
    the "main" function. Therefore, "sum" has a "block scope" and is only
    accessible within the block of the "main" function.
    */
    int sum = 0;

    /*
    "val" is defined with in the scope of the "for" statement.
    Therefore, "val"  is only accessible within the block of
    the "for" statement. 
    */
    for (int val = 1; val <= 10; ++val)
    {
        sum = sum + val;
    }

    /*
    std::cout << val; will not work because "val" is not visible
    in the scope of the "main" function.
    */

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    my_function();
}

/*
Definition of the "my_fucntion"
*/
void my_function()
{
    /*
    std::cout << sum; will not work because "sum" is only visible
    in the scope/body of the "main" function. 
    */
    std::cout << "This is a function that is outside the main function" << std::endl;
}
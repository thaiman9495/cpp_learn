#include <iostream>

/*
"reused" is defined outside the "main" function,
or in other words, it is defined outside everything.
So, it has a "global scope" and can be accessed everywhere
in the program.
*/
int reused = 42;

int main()
{
    /*
    "unique is defined within the body of the "main"
    function, so it has "block scope".
    */
    int unique = 0;

    /*
    The output is "42 and 0".
    Note that the global "reused" is used here.
    */
    std::cout << reused << " and " << unique << std::endl;

    /*
    Here, a new local "reused" is defined that hides the global
    "reused". In other word, "reused" is overwired.
    */
    int reused = 0;

    /*
    The output is "0 and 0".
    Note that the local "reused" is used here.
    */
    std::cout << reused << " and " << unique << std::endl;
    
    /*
    If we want to acdess the global "reused", we can used the
    scope operator (::) as follows:
    */
    std::cout << ::reused << " and " << unique << std::endl;
}
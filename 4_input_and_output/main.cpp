# include <iostream> // Header file

int main() // main function
{
    /*
    std::cout is a standard ouput object defined within the scope "std"
        - std stands for standard library
        - :: is the scope operator
    std::endl is a manipulator defined within the scope "std"
    << is the ouput operator
    */
    std::cout << "Enter two integer numbers:" << std::endl;
    
    /*
    Variables declaration
    */
    int n_1 = 0, n_2 =0;

    /*
    std::in is a standard input object defined within the scope "std"
    >> is the input operator
    */
    std::cin >> n_1 >> n_2;

    std::cout << "The sum of " << n_1 << " and " << n_2 << " is " << n_1 + n_2 << std::endl;
}
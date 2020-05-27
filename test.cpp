
#include <iostream>
#include "calc.hpp"
#include "calcsuper.hpp"

int main()
{
    std::cout << "Hello\n";
    std::cout << add(2, 3) << "\n";
    std::cout << "double de 5 = " << calcul_double(5) << "\n";
    int i = 789;
    std::cout << "i = " << i << std::endl;
    while (true)
    {
        /* code */
        std::cout << "bon\n";
    }
    
    print_current_date();
    print_current_date();
    return 0;
}

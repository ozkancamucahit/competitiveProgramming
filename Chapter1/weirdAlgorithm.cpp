


#include <iostream>



int main ( void )
{
    long num = 0;

    std::cin >> num;
    //std::cin.ignore()

    if ( num < 0  ) return -1;

    std::cout << num<< " ";


    while ( num != 1 )
    {
        if ( num % 2 == 0 ) num /= 2;

        else num = num * 3 +1;

        std::cout << num<< " ";
    }

    std::cout << std::endl;
    return 0;    
}


#include <bits/stdc++.h>


template <class Type>
void BubbleSort( std::vector<Type>& array )
{
    for (size_t i = 0; i < array.size(); ++i)
    {
        for (size_t j = 0; j < array.size()-1; ++j)
        {
            if ( array[j] > array[j+1] )
                std::swap(array[j], array[j+1]);
        }
        
    }
    
}


int main ( void )
{

    std::vector<int> array = {1, 3, 8, 2, 9, 2, 5, 6};
    BubbleSort(array);

    return EXIT_SUCCESS;
}


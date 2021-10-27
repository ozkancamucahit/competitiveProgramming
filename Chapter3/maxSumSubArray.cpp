//#include <bits/stdc++.h>

#include <vector>
#include <cassert>
#include <iostream>

/* maximum subarray brute-force method O(n^3)*/

void FindMaxBF(const std::vector<int>& array)
{
    assert(array.size() != 0);
    int best = 0;

    for (size_t a = 0; a < array.size(); ++a)
    {
        for (size_t b = a; b < array.size(); ++b)
        {
            int sum = 0;

            for (size_t k = a; k <= b; ++k)
            {
                sum += array.at(k);
            }
            
            best = std::max(best, sum);
        }
        
    }
    
    std::cout << "Best (BF):"<< best << '\n';
}

/* Optimized to O(n)*/
void FindMaxOptimized( const std::vector<int>& array)
{
    int best = 0, sum = 0;
    for (size_t k = 0; k < array.size(); ++k)
    {
        sum = std::max(array.at(k), sum + array.at(k));
        best = std::max(best, sum);
    }

    std::cout << "Best (OP):"<< best << '\n';
}

int main ( void )
{
    std::vector<int> test = {-1,2,4,-3,5,2,-5,2};
    FindMaxBF(test);
    FindMaxOptimized(test);
    

    return EXIT_SUCCESS;
}



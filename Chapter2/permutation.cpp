#include <bits/stdc++.h>

using namespace std;

const int n = 3;

vector<int> permutation;
bool chosen[ n+1];
int idx = 1;

void search (  )
{
    if ( permutation.size() == n)
    {
        // process permutation

            cout << "Permutation :"<< idx++ <<" (";

        for (size_t i = 0; i < n; ++i)
        {
            if (i == n - 1)
                cout << permutation.at(i);
            else
            cout << permutation.at(i) << ", ";
        }
        cout << ")\n";
    }
    else{
        for (size_t i = 1; i <= n; ++i)
        {
            if ( chosen[i] ) continue;

            chosen[i] = true;
            permutation.push_back( i );
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
        
    }
}


void search2()
{
    
    for (size_t i = 1; i <= n; ++i)
    {
        permutation.push_back( i );
    }

    int idx = 1;
    do
    {
        cout << "Permutation :"<< idx++ <<" (";

        for (size_t i = 0; i < n; ++i)
        {
            if (i == n - 1)
                cout << permutation.at(i);
            else
            cout << permutation.at(i) << ", ";
        }
        cout << ")\n";

    } while ( next_permutation( permutation.begin(), permutation.end() ));
    

}
int main ( void )
{

    search2();

    return EXIT_SUCCESS;
}
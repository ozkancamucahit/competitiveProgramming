

#include <bits/stdc++.h>
using namespace std;


// subsets of {1, 2, 3} => empty | 1 | 2 | 3 | 1,2 | 1,3 | 2,3 | 1,2,3

typedef vector<int> vi;

vi subset;
int n = 3;



/**
 * \param k decide whether to include k into subset or not 
 */
void search ( int k )
{
    if ( k == n+1){ // end point for recursion
        // process subset
        cout << "inside subset :";

        for ( int i=0; i< subset.size(); ++i)
        { cout << subset.at(i) << " "; }
        cout << "\n";
        return;
    }
    else {
        // include k in the subset
        subset.push_back(k);
        search( k+1 );
        subset.pop_back();
        //don't include k in the subset
        search( k+1 );
        
    }
}

vi kume = { 5, 3, 7};
int kume_boyu = kume.size();
vi subset2;
 
void search2 ( int idx )
{
    if ( idx == kume_boyu ){ // end point for recursion
        // process subset
        cout << "inside subset :";

        for ( int i=0; i< subset2.size(); ++i)
        { cout << subset2.at(i) << " "; }
        cout << "\n";
        return;
    }
    else {
        // include k in the subset2
        subset2.push_back( kume.at(idx) );
        search2( idx + 1 );
        subset2.pop_back();
        //don't include k in the subset2
        search2( idx + 1 );
    }
}

int main( void )
{

    search(1);
    search2( 0 );

    getchar();

    return EXIT_SUCCESS;
}



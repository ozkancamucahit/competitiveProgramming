#include <bits/stdc++.h>

using namespace std;


const int n = 16; /*<! size of chess table*/

int* col   = (int*)calloc( n*n, sizeof(int) );
int* diag1 = (int*)calloc( n*n, sizeof(int) );
int* diag2 = (int*)calloc( n*n, sizeof(int) );

int count = 0;

void search ( int y )
{
    if ( y == n )
    {
        ::count++;
        return;
    }

    for (size_t x = 0; x < n; ++x)
    {                   // diag1 => /  diag2=> \ "
        if ( col[x] || diag1[ x + y ] || diag2[ x - y + n - 1] ) continue;

        col[x] = diag1[ x + y ] = diag2[ x - y + n - 1] = 1;
        search( y + 1 );
        col[x] = diag1[ x + y ] = diag2[ x - y + n - 1] = 0;
    }
}

int main ( void )
{

    search(0);
    cout << "possible solutions count :"<< ::count<<"\n";

    return EXIT_SUCCESS;
}
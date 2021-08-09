
#include <bits/stdc++.h>

using namespace std;

void printBits( const int& x)
{
    cout << x << "=> ";
    for (int i = 31; i >= 0; i--)
    {
        if ( x & ( 1 << i ) ) cout << 1;
        else cout << 0;
    }
    cout<<"\n";
}

void printSets( const int& x)
{
    cout << x << "=> ";
    for (int i = 31; i >= 0; i--)
    {
        if ( x & ( 1 << i ) ) cout << i;
    }
    cout<<"\n";
}

void printLong( const int64_t& x)
{
    cout << x << "=> ";
    for (int i = 64; i >= 0; i--)
    {
        if ( x & ( 1 << i ) ) cout << 1;
        else cout << 0;
    }
    cout<<"\n";
}

int main ( void )
{

    int x = 5364;
    printBits(x);
    x |= (x-1);
    printBits(x);

    cout << __builtin_clz(x)<<"\n"; // # of zeros at the beginning
    cout << __builtin_ctz(x)<<"\n"; // # of zeros at the end
    cout << __builtin_popcount(x)<<"\n"; // # of 1's
    cout << __builtin_parity(x)<<"\n"; // Parity

    int set = 0;

    set |= ( 1<< 1);
    set |= ( 1<< 3);
    set |= ( 1<< 4);
    set |= ( 1<< 8);

    printSets(set);

    //cout << "size:" << sizeof( int64_t)<< "\n"; // 8 byte

    int64_t lol = 0;
    printLong(lol);

    return EXIT_SUCCESS;
}
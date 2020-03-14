#include <iostream>
#define N 15
using namespace std;

int* fibo(int* foo, int n)
{
    int i;
    foo = new int[n];
    for(i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            foo[i] = 1;
        }
        else
        {
            foo[i] = foo[i-2] + foo[i-1];
        }
    }
    return foo;
}

int main()
{
    int i;
    int* foo;
    foo = fibo(foo, N);
    for(i = 0; i < N; i++)
    {
        cout << foo[i] << endl;
    }
}

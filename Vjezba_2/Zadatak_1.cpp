#include <iostream >
#define N 5
using namespace std;

void minmax(int& a, int& b, int* foo, int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        if(a > foo[i])
        {
            a = foo[i];
        }
        if(b < foo[i])
        {
            b = foo[i];
        }
    }
}

int main()
{
    int foo [] = { 16, 2, 77, 40, 12 };
    int a = foo[0];
    int b = foo[0];
    minmax(a, b, foo, N);
    cout << a << ", " << b << endl;
}

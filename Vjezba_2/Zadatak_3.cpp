#include <iostream>
#define N 3
using namespace std;

int& ret_ref (int foo[], int i)
{
    return foo[i];
}

int main()
{
    int foo[] = {16, 2, 77, 40, 12071};
    cout << foo[N] << endl;
    ret_ref(foo, N) += 1;
    cout << foo[N] << endl;
}

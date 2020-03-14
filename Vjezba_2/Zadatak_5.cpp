#include <iostream>
using namespace std;

int* reallocation(int* arr, int& n)
{
    int* darr = new int [2 * n];
    int j = 0;
    for (j = 0; j < n; j++)
    {
        darr[j] = arr[j];
    }
    n = 2 * n;
    delete[] arr;
    return darr;
}

int* num_entry(int* arr, int& n, int& k)
{
    arr = new int[n];
    while(!0)
    {
        if (k == n)
        {
            arr = reallocation(arr, n);
        }
        cin >> arr[k];
        if (arr[k] == 0)
            break;
        k++;
    }
    return arr;
}

int main()
{
    int n = 2, i, k = 0;
    int* arr = num_entry(arr, n, k);
    for(i = 0; i < k; i++)
    {
        cout << arr[i] << ", ";
    }
}

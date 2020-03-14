#include <iostream>
#define N 5
using namespace std;

typedef struct Vector
{
    int* element;
    int log;
    int fiz;
} vec;

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

vec& vector_new(vec& v1)
{
    v1.element = new int[1];
    v1.log = 0;
    v1.fiz = 1;
    return v1;
}

vec& vector_push_back (vec& v1)
{
    if (v1.log == v1.fiz)
    {
        v1.element = reallocation(v1.element, v1.fiz);
        v1.fiz = v1.fiz * 2;
    }
    cin >> v1.element[v1.log];
    v1.log++;
    return v1;
}

int* vector_pop_back(vec& v1)
{
    int* arr = new int [v1.log];
    for (int i = 0; i < v1.log-1; i++)
    {
        arr[i] = v1.element[i];
    }
    v1.log--;
    delete[] v1.element;
    return arr;
}

int vector_front(vec& v1)
{
    return v1.element[0];
}

int vector_back(vec& v1)
{
    return v1.element[v1.log-1];
}

int vector_size(vec& v1)
{
    return v1.log;
}

void vector_delete(vec* v1)
{
    delete[] v1->element;
    delete v1;
}

int main()
{
    int n;
    vec v1;
    v1 = vector_new(v1);
    cout << "dodaj na kraj " << N << " elemenata" << endl;
    while(v1.log < N)
    {
        v1 = vector_push_back(v1);
    }
    for (int i = 0; i < v1.log; i++)
    {
        cout << v1.element[i] << " ";
    }
    cout << endl;
    cout << "pop_back" << endl;
    v1.element = vector_pop_back(v1);
    for (int i = 0; i < v1.log; i++)
    {
        cout << v1.element[i] << " ";
    }
    cout << endl;
    int prvi = vector_front(v1);
    cout << "prvi element je " << prvi << endl;
    int zadnji = vector_back(v1);
    cout << "zadnji element je " << zadnji << endl;
    int velicina = vector_size(v1);
    cout << "velicina niza je " << velicina << endl;
    vector_delete(&v1);
}

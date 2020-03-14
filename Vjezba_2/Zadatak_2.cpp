#include <iostream>
#include <bits/stdc++.h>
#define N 4
using namespace std;

/*Definirati strukturu kruznica. Napisati funkciju
koja prima niz kruznica i jednu glavnu kruznicu
te vraća broj kruznica koje sijeku glavnu kružnicu.
Niz kruznica i glavna kružnica šalju se u funkciju pomoću const referenci.*/

typedef struct Kruznica
{
    int rad;
    int cent[2];
} kru;

int num_inters(const kru*& point, const kru& k0)
{
    int br = 0;
    for (int i = 0; i < N; i++)
    {
        if(k0.rad >= point[i].rad)
        {
            if (k0.rad <= sqrt(pow(k0.cent[0] - point[i].cent[0], 2) + pow(k0.cent[1] - point[i].cent[1],2)))
            {
                if ((k0.rad + point[i].rad) <= sqrt(pow(k0.cent[0] - point[i].cent[0], 2) + pow(k0.cent[1] - point[i].cent[1],2)))
                    cout << "kruznica k" << i+1 << " ne sijece k0" << endl;
                else
                    {
                        cout << "kruznica k" << i+1 << " sijece k0" << endl;
                        br++;
                    }
            }
            else
            {
                if (k0.rad >= (point[i].rad + sqrt(pow(k0.cent[0] - point[i].cent[0], 2) + pow(k0.cent[1] - point[i].cent[1],2))))
                    cout << "kruznica k" << i+1 << " ne sijece k0" << endl;
                else
                    {
                        cout << "kruznica k" << i+1 << " sijece k0" << endl;
                        br++;
                    }
            }
        }
    else
    {
        if (point[i].rad <= sqrt(pow(k0.cent[0] - point[i].cent[0], 2) + pow(k0.cent[1] - point[i].cent[1],2)))
        {
            if ((k0.rad + point[i].rad) <= sqrt(pow(k0.cent[0] - point[i].cent[0], 2) + pow(k0.cent[1] - point[i].cent[1],2)))
                cout << "kruznica k" << i+1 << " ne sijece k0" << endl;
            else
                {
                    cout << "kruznica k" << i+1 << " sijece k0" << endl;
                    br++;
                }
        }
        else
        {
            if (point[i].rad >= (k0.rad + sqrt(pow(k0.cent[0] - point[i].cent[0], 2) + pow(k0.cent[1] - point[i].cent[1],2))))
                cout << "kruznica k" << i+1 << " ne sijece k0" << endl;
            else
                {
                    cout << "kruznica k" << i+1 << " sijece k0" << endl;
                    br++;
                }
        }
    }
    }
    return br;
}

int main()
{
    kru k0, k1, k2, k3, k4;
    k0.rad = 3, k0.cent[0] = 2, k0.cent[1] = 1;
    k1.rad = 3, k1.cent[0] = 7, k1.cent[1] = 1;
    k2.rad = 1, k2.cent[0] = 7, k2.cent[1] = 1;
    k3.rad = 1, k3.cent[0] = 3, k3.cent[1] = 1;
    k4.rad = 3, k4.cent[0] = 3, k4.cent[1] = 1;
    kru arr[N] = {k1, k2, k3, k4};
    const kru* point = arr;
    int pres = num_inters(point, k0);
    cout << pres << " kruznica/e sijece/ku k0";
}

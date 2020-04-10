#include <iostream>
#define N 7
using namespace std;
#include <vector>
using std::vector;

vector<int> sumvek(vector<int> veky, int& mini, int& maxi)
{
    int i;
    vector<int> neky(N/2,0);
    for (i = 0; i < (N/2); i++)
    {
        neky.at(i) = veky.at(i) + veky.at(N-1-i);
        if (i == 0 || neky.at(i) < mini)
            mini = neky.at(i);
        if (i == 0 || neky.at(i) > maxi)
            maxi = neky.at(i);
    }
    return neky;
}

int main()
{
    int mojniz[N] = {5, 2, 6, 8, 7, 4, 3};
    int mini, maxi, i;
    vector<int> veky(mojniz, mojniz+N);
    vector<int> neky = sumvek(veky, mini, maxi);
    cout << mini << endl;
    cout << maxi << endl;
    for (i = 0; i < N/2; i++)
    {
        cout << neky[i] << " ";
    }
}

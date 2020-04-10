#include <iostream>
using namespace std;
#include <string.h>

string izbaci(string str1, string podstr)
{
    str1[0] = tolower(str1[0]);
    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < podstr.length(); j++)
        {
            if (str1[i+j] != podstr[j])
                goto vani;
        }
        str1.erase(i, podstr.length());
        i--;
        vani:;
    }
    return str1;
}

int main()
{
    string str1 = "Ne zovite mene, ne, ne, ne, ne zovite i recite mu da mene, ne, ne, ne, ne, nema me.";
    string podstr = " ne,";          // probajte ovo
    //string podstr = "ne";         // ili ovo
    string str2 = izbaci(str1, podstr);
    cout << str2;
}

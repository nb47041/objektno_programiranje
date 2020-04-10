#include <iostream>
using namespace std;
#include <string.h>

string najduzi(string str1, string str2)
{
    string strlong, strtemp, strtemptemp;
    for (int i = 0; i < str1.length(); i++)
    {
        for (int k = 0; k < str2.length(); k++)
        {
            strtemptemp.clear();
            for (int j = 0; j < str2.length()-k; j++)
            {
                if ((i+j) == str1.length())
                    break;
                if (str2[k+j] == str1[i+j])
                {
                    strtemptemp.push_back(str2[k+j]);
                    if (strtemptemp.length() > strtemp.length())
                    {
                        strtemp = strtemptemp;
                    }
                }
                else
                    break;
            }
        }
        if ((strtemptemp.length() <= strlong.length()) && (strtemp.length() <= strlong.length()))
            continue;
        if (strtemptemp.length() > strtemp.length())
        {
            strtemp = strtemptemp;
        }
        if (strtemp.length() > strlong.length())
        {
            strlong = strtemp;
        }
        //cout << strlong << endl;;
    }
    return strlong;
}

int main()
{
    string str1 = "papan_papapa_parap_";
    string str2 = "paparap_an_";
    string strnew = najduzi(str1, str2);
    cout << strnew;
}

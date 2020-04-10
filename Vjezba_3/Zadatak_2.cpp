#include <iostream>
using namespace std;
#include <cstring>
#include <bits/stdc++.h>

char* okreni(char* str1)
{
    int t=0;
    str1[0] = tolower(str1[0]);
    reverse(str1, str1+strlen(str1)-1);
    for(int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ' ' || str1[i] == '.')
        {
            for (int j = 0; j < (i-t)/2; j++)
            {
                char temp = str1[i-1-j];
                str1[i-1-j] = str1[j+t];
                str1[j+t] = temp;
            }
            t = i+1;
        }
    }
    str1[0] = toupper(str1[0]);
    return str1;
}

int main()
{
    char str1[] = "Sve je super.";
    char* str2 = okreni(str1);
    cout << str2;
}

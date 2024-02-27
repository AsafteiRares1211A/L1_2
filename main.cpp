#pragma warning(disable:4996)
#include <iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    char sir[10000];


    file.getline(sir, 10000);

    const size_t len = strlen(sir);

    cout << sir << '\n';
    for (int i = 0; i < len; ++i)
    {
        if (ispunct(sir[i]))
        {
            strcpy(sir + i, sir + i + 1);
            --i;
        }
    }

    cout << sir;
    return 0;
}
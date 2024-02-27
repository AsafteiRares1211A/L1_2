#pragma warning(disable:4996)
#include <iostream>
#include<cstring>
#include<fstream>
using namespace std;


void ULC(std::fstream &outputFile, std::fstream &inputFile)
{
    char c;
    inputFile>>c;
    while(!inputFile.eof())
    {
        if(isalpha(c))
        {
            if(islower(c))
            {
                outputFile<<(char)((int)c-32);
            }
            else{
                outputFile<<(char)((int)c+32);
            }

        } else{
            outputFile<<c;
        }
        inputFile>>c;
    }
}
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
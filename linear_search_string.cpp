#include <iostream>
#include <cstring>//
using namespace std;

int main()
{
    string str;
    char terget_ch;
    bool not_found = 1;
    cout << "entre str: " << endl;
    cin >> str;
    cout << "enter terget value: ";
    cin >> terget_ch;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == terget_ch)
        {
            cout << "Found!";
            not_found = 0;
            break;
        }
    }
    if (not_found)
    {
        cout << "not found";
    }
    return 0;
}

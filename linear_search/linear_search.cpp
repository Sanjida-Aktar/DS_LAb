#include <iostream>
using namespace std;

/*
linear search for a value in an array
*/

int main()
{
    int key, n, not_found = 1;

    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];
    cout << "enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "the element is found";
            not_found = 0;
            break;
        }
    }
    if (not_found)
        cout << "the element is not found";
    return 0;
}
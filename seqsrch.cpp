#include <iostream>
using namespace std;
#define MAX 5
int main()
{
    int a[MAX], i, x, index;
    int seq_srch(int[], int);

    cout << "Enter the elements of array: ";
    for (i = 0; i < MAX; i++)
    {
        cin >> a[i];
    }

    cout << "Enter data to be searched in array: ";
    cin >> x;

    index = seq_srch(a, x);

    if (index == -1)
    {
        cout << "Data is not available in array";
    }
    else
    {
        cout << "Data is available at index :" << index;
    }

    return 0;
}

int seq_srch(int a[], int x)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
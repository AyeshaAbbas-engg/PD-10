#include <iostream>
using namespace std;
bool diif(int arr[], int len);
main()
{
    int len = 0;
    cout << "Enter length : ";
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    bool ans2 = diif(arr, len );
    if ( ans2)
    {
        cout << "True \n";
    }
    else
    {
        cout << "False \n";
    }
}
bool diif(int arr[], int len)
{
    int max;
    bool option = true;
    for (int x = 0; x < len; x++)
    {
        for (int j = 0; j < len - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                max = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = max;
            }
        }
    }

    for (int i = 0; i < len-1; i++)
    {
        if (!(arr[i] == (arr[i + 1] - 1)))
        {
            option = false;
            break;
        }
    }

    return option;
}
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int arr[] = { 1,5,2,8,6,4,3,2,9,3 };
    cout << "Не сортований масив:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << ' ';
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    cout << "\nCортований масив:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

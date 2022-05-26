#include <iostream>
#include <string>

using namespace std;

void alphabetSort(string* arr, int size)
{
    string temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (tolower(arr[j][0]) > tolower(arr[j + 1][0])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(string* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << endl << arr[i];
}

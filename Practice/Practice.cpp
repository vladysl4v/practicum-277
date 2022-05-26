#include <iostream>
#include <string>

using namespace std;

void alphabetSort(string*, int);
void printArray(string*, int);

int main()
{
    int size = 0;
    char input[100];
    string arr[20];
    cout << "Input text -> ";
    cin.getline(input, 100);

    char* p = strtok(input, " ");
    while (p != NULL) {
        arr[size] = p;
        p = strtok(NULL, " ");
        size++;
    }

    cout << "Array:";
    printArray(arr, size);

    alphabetSort(arr, size);

    cout << endl <<"Sorted array:";
    printArray(arr, size);

    return 0;
}

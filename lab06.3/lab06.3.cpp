
#include <iostream>
#include <ctime>

using namespace std;

int FindMin(int arr[], int size);
int Minim(int a, int b);

//Cпосіб без шаблонів

void create(int* arr, int n)
{
    for (int k = 0; k < n; k++)
    {
        arr[k] = (rand() % 100) - 49;
    }
}

void display(int* arr, int n)
{
    cout << "{ ";

    for (int k = 0; k < n; k++)
    {
        if (k < n - 1)
            cout << arr[k] << ", ";

        else cout << arr[k] << " }\n";
    }
}

int main()
{
    srand(time(NULL));

    int n;

    double sum = 0;

    cout << "Input size of array: "; cin >> n;

    int* arr = new int[n];

    create(arr, n);

    cout << "Created array: "; display(arr, n);

    cout << "Minimal Number: " << FindMin(arr, n) << endl;

    delete[] arr;
    system("pause");
}

int FindMin(int arr[], int size)
{
    int minNumber = arr[0];

    for (int k = 1; k < size; k++)
    {
        if (minNumber > arr[k])
        {
            minNumber = arr[k];
        }
    }
    return minNumber;
}

int Minim(int a, int b)
{
   return a < b ? a : b;
}

//Cпосіб з шаблонами

template <typename T1>
void create(T1* arr, T1 n)
{
    for (int k = 0; k < n; k++)
    {
        arr[k] = (rand() % 100) - 49;
    }
}

template <typename T2>
void display(T2* arr, T2 n)
{
    cout << "{ ";

    for (int k = 0; k < n; k++)
    {
        if (k < n - 1)
            cout << arr[k] << ", ";

        else cout << arr[k] << " }\n";
    }
}


template <typename T>
void FindMin(T arr[], T size)
{
    int minNumber = arr[0];

    for (int k = 1; k < size; k++)
    {
        if (minNumber > arr[k])
        {
            minNumber = arr[k];
        }
    }
    return minNumber;

}

template <typename T>
int Minim(int a, int b)
{
    return a < b ? a : b;
}

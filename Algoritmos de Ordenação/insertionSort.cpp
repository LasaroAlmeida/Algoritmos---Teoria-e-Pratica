#include <iostream>
using namespace std;

// recebendo o array como parametro
void insertionSort(int *array, int length)
{
    for (int j = 1; j < length; j++)
    {
        int key = array[j];
        int i = j - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}

void printArray(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout<<endl;
}

int main(int argc, char **argv)
{
    // define um array para ser ordenado
    int length = 10;
    int array[length] = {10, -1, 14, 1, 0, 22, 13, 100, 9, 11};
    cout << "Array antes da ordenacao" << endl;
    printArray(array, length);
    
    /** ordenação**/
    insertionSort(array, length);
    cout << "Apos a ordenacao" << endl;
    printArray(array, length);
}
#include <iostream> 
using namespace std;

int main(){
    int sum = 0;
    int size;

    cout << "Enter a size of array: ";
    cin >> size;

    int* numbers = new int[size]; // dynamically allocate memory for the array after getting size

    cout << "Enter a number: ";
    cin >> numbers[0];
    sum += numbers[0];
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
        sum += numbers[i];

        if (numbers[i] < min ){
            min = numbers[i];
        }

        if (numbers[i] > max){
            max = numbers[i];
        }
    }

    cout << "" << endl;
    cout << "The finite sum of the series is: " << sum << endl; 
    cout << "" << endl; 
    cout << "The minimum value in the array is " << min << endl;
    cout << "" << endl; 
    cout << "The maximum value of the array is: " << max << endl; 
    cout << "" << endl;

    delete[] numbers; // don't forget to deallocate the memory

    return 0;
}
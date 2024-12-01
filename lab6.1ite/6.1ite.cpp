#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateArray(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int countPositiveNotMultipleOf5(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && i % 5 != 0) {
            count++;
        }
    }
    return count;
}

int sumPositiveNotMultipleOf5(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && i % 5 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void replaceWithZero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && i % 5 != 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    srand(time(0));

    const int size = 20;
    int arr[size];

    generateArray(arr, size, -20, 50);

    cout << "Original array:\n";
    printArray(arr, size);

    int count = countPositiveNotMultipleOf5(arr, size);
    int sum = sumPositiveNotMultipleOf5(arr, size);

    cout << "\nProcessed array:\n";
    replaceWithZero(arr, size);
    printArray(arr, size);

    // Виведення результатів з вирівнюванням
    cout << "\nResults:\n";
    cout << left << setw(42) << "Count of elements matching the criterion:" << setw(5) << count << endl;
    cout << left << setw(42) << "Sum of elements matching the criterion:" << setw(5) << sum << endl;

    return 0;
}

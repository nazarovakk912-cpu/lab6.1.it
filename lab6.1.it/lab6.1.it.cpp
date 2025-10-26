#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
// --- Заповнення масиву випадковими числами ---
void fillArray(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}
// --- Виведення масиву ---
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}
// --- Підрахунок кількості від’ємних, не кратних 3 ---
int countNegNot3(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && arr[i] % 3 != 0)
            count++;
    }
    return count;
}
// --- Підрахунок суми таких елементів ---
int sumNegNot3(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && arr[i] % 3 != 0)
            sum += arr[i];
    }
    return sum;
}
// --- Замінити ці елементи на 0 ---
void replaceNegNot3(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && arr[i] % 3 != 0)
            arr[i] = 0;
    }
}

int main() {
    const int SIZE = 24;
    int x[SIZE];

    srand((unsigned)time(0));

    fillArray(x, SIZE, -17, 53);

    cout << "Початковий масив:\n";
    printArray(x, SIZE);

    int count = countNegNot3(x, SIZE);
    int sum = sumNegNot3(x, SIZE);

    cout << "\nКількість елементів, що < 0 і не кратні 3: " << count << endl;
    cout << "Сума таких елементів: " << sum << endl;

    replaceNegNot3(x, SIZE);

    cout << "\nМасив після заміни:\n";
    printArray(x, SIZE);

    return 0;
}

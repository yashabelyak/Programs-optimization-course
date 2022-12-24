#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    unsigned int start_time = clock(); // начальное время
    const int NZ = 9;
    const int N = 6;
    int value[NZ] = {1, 2, 3, 4, 8, 5, 7, 1, 6};
    int row[NZ] = {0, 0, 1, 1, 3, 3, 5, 5, 5};
    int col[NZ] = {0, 4, 2, 3, 3, 5, 1, 2, 5};
    int y[N] = {0, 0, 0, 0, 0, 0};
    int x[N] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < NZ; i++) {
        y[row[i]] += value[i] * x[col[i]];
    }
    for (int i = 0; i < N; i++) {
        cout << y[i] << endl;
    }
    unsigned int end_time = clock(); // конечное время
    unsigned int search_time = end_time - start_time; // искомое время
    cout << search_time;
}

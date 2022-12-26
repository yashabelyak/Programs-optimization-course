#include <iostream>
using namespace std;

int main()
{
    unsigned int start_time = clock();
    const int N = 6;
    const int NZ = 9;
    const int RI = 7;
    int sum, j1, j2;
    int Value[NZ] = { 1,2,3,4,8,5,7,1,6 };
    int Col[NZ] = { 0,4,2,3,3,5,1,2,5 };
    int RowIndex[RI] = { 0,2,4,4,6,6,9 };
    int x[N] = { 1, 2, 3, 4, 5, 6 };
    int y[N];
    for (int i = 0; i < N; i++)
    {
        // Вычисляем i-ю компоненту вектора y 
        sum = 0;
        j1 = RowIndex[i]; j2 = RowIndex[i + 1];
        for (int j = j1; j < j2; j++)
            sum = sum + Value[j] * x[Col[j]];
        y[i] = sum;
    }
    for (int i = 0; i < N; i++) {
        cout << y[i] << endl;
    }
    unsigned int end_time = clock(); // конечное время
    unsigned int search_time = end_time - start_time; // искомое время
    cout << search_time;
}

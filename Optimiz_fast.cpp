#include <iostream>
using namespace std;

int main()
{
    unsigned int start_time = clock();
    const int N = 6;
    int Value[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Value[i][j] = 0;
        }
    }
    Value[0][0] = 1;
    Value[0][4] = 2;
    Value[1][2] = 3;
    Value[1][3] = 4;
    Value[3][3] = 8;
    Value[3][5] = 5;
    Value[5][1] = 7;
    Value[5][2] = 1;
    Value[5][5] = 6;
    int x[N] = { 1, 2, 3, 4, 5, 6 };
    int y[N] = { 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            y[i] += Value[i][j] * x[j];
        }
    }
    for (int i = 0; i < N; i++) {
        cout << y[i] << endl;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Value[i][j] << " ";
        }
        cout << endl;
    }
    unsigned int end_time = clock(); // конечное время
    unsigned int search_time = end_time - start_time; // искомое время
    cout << search_time;
}


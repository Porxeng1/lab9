#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N, int M) {
    if (N <= 0 || M <= 0) {
        cout << "Invalid input" ;
    } else {
        for (int i = 0; i < N; ++i) { /*ลูปบรรทัด*/
            for (int j = 0; j < M; ++j) { /*ลูปตัวโอ*/
                cout << 'O';
            }
            cout << "\n";
        }
    }
}
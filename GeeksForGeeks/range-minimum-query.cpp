// Used a sparse table data structure to solve the problem, not a segment tree
// Read about sparse table here : https://cp-algorithms.com/data_structures/sparse-table.html
// Problem Link : https://practice.geeksforgeeks.org/problems/range-minimum-query/1

{
#include <bits/stdc++.h>
    using namespace std;
    int* constructST(int arr[], int n);
    int RMQ(int st[], int n, int a, int b);
    int main()
    {
        int T;
        cin >> T;
        while (T--) {
            int N;
            cin >> N;
            int A[N];
            for (int i = 0; i < N; i++)
                cin >> A[i];
            int Q;
            cin >> Q;
            int* segTree = constructST(A, N);
            for (int i = 0; i < Q; i++) {
                int start, e;

                cin >> start >> e;
                if (start > e) {
                    swap(start, e);
                }
                cout << RMQ(segTree, N, start, e) << " ";
            }
            cout << endl;
        }
    }
}

int K = 10;
int st[1005][12];
int lg[1005];
int* constructST(int array[], int N)
{
    lg[1] = 0;
    for (int i = 2; i < 1005; i++)
        lg[i] = lg[i / 2] + 1;
    for (int i = 0; i < N; i++)
        st[i][0] = array[i];
    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    return array;
}

int RMQ(int arr[], int n, int a, int b)
{
    int j = lg[b - a + 1];
    return min(st[a][j], st[b - (1 << j) + 1][j]);
}

//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;
    printf("Enter rows and columns of first matrix:");
    cin >> m >> n;
    printf("Enter rows and columns of second matrix:");
    cin >> p >> q;

    if (n == p) {
        printf("\nEnter first matrix:\n");

        for (i = 0; i < m; ++i)
            for (j = 0; j < n; ++j)
                cin>>a[i][j];

        printf("\nEnter second matrix:\n");

        for (i = 0; i < p; ++i)
            for (j = 0; j < q; ++j)
                cin>>b[i][j];

        printf("\nThe new matrix is:\n");

        for (i = 0; i < m; ++i) {
            for (j = 0; j < q; ++j) {
                c[i][j] = 0;
                for (k = 0; k < n; ++k)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                printf("%d ", c[i][j]);
            }

            printf("\n");
        }
    } else
        printf("\nSorry!!!! Matrix multiplication can't be done");

    return 0;
}
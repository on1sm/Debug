#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int start = 0, column = n, row = m;
    int count = 0;
    while(start < column && start < row) {
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                if (i == m - 1){
                    printf("%d", matrix[i][0]);
                } else {
					printf("%d ", matrix[i][0]);
				}
            }
        } else  if (m == 1) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    printf("%d", matrix[0][j]);
                } else {
					printf("%d ", matrix[0][j]);
				}
            }
        } else {
    		for (int j = start; j < column; j++) {
                if(++count > m * n){
                    break;
                } else 
        		printf("%d ", matrix[start][j]);
    		}
    		for (int i = start + 1; i < row; i++) {
                if(++count > m * n){
                    break;
                } else 
       		 	printf("%d ", matrix[i][column-1]);
    		}		
    		for (int j = column-2; j >= start; j--) {    
                if(++count > m * n){
                    break;
                } else {
                    if(row - 1 == start) {
						break;
				    }
       		 		printf("%d ", matrix[row-1][j]);
                }
   			}
    		for (int i = row-2; i > start; i--) {
                 if(++count > m * n){
                    break;
                } else
        		printf("%d ", matrix[i][start]);
   			}
        }
    	start++;
    	column--;
    	row--;
    }
    return 0;
}
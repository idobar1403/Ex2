#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define n 10
int insertValues(int mat[n][n]){
    int i,j,k;
    int temp[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("enter value for:%d",mat[i][j]);
            scanf("%d",&mat[i][j]);
            temp[i][j]=mat[i][j];
        }
    }
    for (k = 0; k < n; k++){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++)
            {
                if(i==j){
                    mat[i][j]=0;
                }
                else if(temp[i][j]!=0&&temp[i][k]!=0&&temp[k][j]!=0){
                    mat[i][j]=MIN(temp[i][j],temp[i][k]+temp[k][j]);
                }
                else if (temp[i][j]!=0&&(temp[i][k]==0||temp[k][j]==0))
                {
                    mat[i][j]=temp[i][j];
                }
                else if (temp[i][j]==0&&temp[i][k]!=0&&temp[k][j]!=0){
                    mat[i][j]=temp[i][k]+temp[k][j];
                }
                else{
                    mat[i][j]=0;
                }
            }
        }
        for(i=0;i<n;i++){
            for (j = 0; j < n; j++){
                temp[i][j]=mat[i][j];
            }
        }
    }
    return 0;
}
bool hasPath(int mat[n][n],int i,int j){
    if(mat[i][j]==0){
        return false;
    }
    return true;
}
int shortestPath(int mat[n][n],int i,int j){
    if(mat[i][j]==0){
        return -1;
    }
    return mat[i][j];
}
#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define n 10
int main(int argc, char const *argv[])
{
    char func=0;
    int mat[n][n];
    while(func!='D'){
        scanf(" %c",&func);
        if(func=='A'){
            insertValues(mat);
            // int i,j;
            // for (i=0;i<n;i++){
            //     for (j=0;j<n;j++){
            //         printf("%d \n",mat[i][j]);
            //     }
            // }
        }
        else if(func=='B'){
            int i,j;
            scanf("%d%d",&i,&j);
            int ans=hasPath(mat,i,j);
            if(ans==1){
                printf("True");
            }
            else{
                printf("False");
            }
        }
        else if(func=='C'){
            int i,j;
            scanf("%d%d",&i,&j);
            int ans=shortestPath(mat,i,j);
            printf("%d\n",ans);
        }
    }
    return 0;
}

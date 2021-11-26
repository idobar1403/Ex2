#include <stdio.h>
#include <math.h>
#include "my_mat.h"
int main(int argc, char const *argv[])
{
    char func;
    int mat[4][4];
    while(func!='D'){
        scanf(" %c",&func);
        if(func=='A'){
            insertValues(mat);
            int i,j;
            for (i=0;i<4;i++){
                for (j=0;j<4;j++){
                    printf("%d \n",mat[i][j]);
                }
            }
        }
        else if(func=='B'){
            int i,j;
            scanf("%d%d",&i,&j);
            bool ans=hasPath(mat,i,j);
            printf("%d\n",ans);
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

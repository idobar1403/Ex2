#ifndef _MY_MAT_H_
    #define _MY_MAT_H_
    /* will insert values in the matrix*/
    const int n;
    int insertValues(int[n][n]);

    /* will return if there is path between the nodes */
    int hasPath(int[n][n],int,int);
     
    /* will return shortest path*/
    int shortestPath(int[n][n],int,int);
#endif

//creating matrice using malloc/dynamic memory allocation
#include <stdio.h>
#include<stdlib.h>
int main(){
    int m;
    int n;
    scanf("%d",&m);
    scanf("%d",&n);
    int **matrice;
    matrice=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        matrice[i]=(int*)malloc(n*sizeof(int));
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            scanf("%d",&matrice[j][k]);
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            printf("%d\t",matrice[j][k]);
        }
        printf("\n");
    }



    return 0;
}
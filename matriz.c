#include <stdio.h>
#include <time.h>

void multiplicacion_matrices()
{

    int row1, col1, row2, col2;
    row1 = col1 = row2 = col2 = 800;
   
    if(col1 == row2)
    {
    
       int A[row1][col1],B[row2][col2],C[col1][row2],i,j,k;
       for(i=0; i<row1; ++i)
       {
           for(j=0; j<col1; ++j)
            {
                A[i][j]=rand()%10;
            }
       }
       
       for(i=0; i<row2; ++i)
       {
           for(j=0; j<col2; ++j)
            {
                B[i][j]=rand()%10;
            }
       }
        
       for(i=0; i<row1; ++i)
       {
         for(j=0; j<col2; ++j)
         {
           for(k=0; k<col1; ++k)
           {
             C[i][j]+=A[i][k]*B[k][j];
           }    
         }
       }
    }
}

int main(){
    //clock_t start = clock();
    multiplicacion_matrices();
    //printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
    //printf("\n\n");
    return 0;
    
}

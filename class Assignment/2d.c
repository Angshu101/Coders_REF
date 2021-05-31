#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int r ,c; 
    printf(" enter the value of rows");
    scanf("%d",&r);
     printf(" enter the value of columns");
     scanf("%d",&c);
    int left=0,right=(r-1); 
     int arr[r][c]; 

	int i, j, count = 0,temp; 
	
         for (i = 0; i < r; i++) 
	for (j = 0; j < c; j++) 
        arr[i][j]=count++;
		
   
    printf("The Matrix is :-");
    printf("\n");
    for (i = 0; i < r; i++) 
     {
	for (j = 0; j < c; j++) 
		printf(" %d",arr[i][j]); 
         printf("\n");
    }
        
    

     //Algortithm
     while(left<right)
     {   for(j=0;i<c;j++)
         for(i=0;i<r;i++)
         {
             int t=arr[i][j];
             arr[i][j]=arr[i][right];
             arr[i][right]=t;

        }
          left++;
          right--;
     }
     printf("The Swaped matrix is :- ");
     printf("\n");

     for (i = 0; i < r; i++) {
	for (j = 0; j < c; j++) 
		printf(" %d ",arr[i][j]); 
        printf("\n");
    }

	return 0; 
} 

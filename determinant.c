#include<stdio.h>
int main()
{
	int i,j,k;
	int m[i][j];
	int det;
    int x,y,z;
    for(i=0;i<3;i++)
  	{
	  for(j=0;j<3;j++)
	  {		
	    
		scanf("%d",&m[i][j]);	
		
      }
	printf("\n");
   	}	
   	printf("\n");
	for(i=0;i<3;i++)
  	{
	  for(j=0;j<3;j++)
	  {		
	     printf("%d  ",m[i][j]);	
		
      }
      printf("\n");
	
   	}
   	int aa=0,bb=1,cc=2;
    x = (m[0][0])((m[1][1] * m[2][2]) - (m[1][2] * m[2][1]));
   	y = (m[0][1])((m[1][0] * m[2][2]) - (m[2][0] * m[1][2]));
   	z = (m[0][2])((m[1][0] * m[2][1]) - (m[2][0] * m[1][2]));
   	det = x-y+z;
   	
	//det = m[1][1](m[2][2]*m[3][3]-m[2][3]*m[3][2])-m[1][2](m[2][1]*m[3][3]-m[3][1]*m[2][3])+m[1][3](m[2][1]*m[3][2]-m[3][1]*m[2][2]);
   
    printf("Determinant is : %0.3f",det);	
 
	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
 
int main () {
	setlocale(LC_ALL, "rus");
	const int maxSize = 50;
 	int i,temp=0,X[maxSize],Y[maxSize],c[maxSize],y[maxSize],temp1=0,z,x,j, size;
 	printf("Введите размер массива : \n");
 	scanf("%d", &size);
 	while(size < 1 || size > maxSize)
 	{
 		printf("Некорректный ввод, повторите \n");
 		scanf("%d", &size);
	}
    srand(time(0));
    for(i=0; i<size; i++)
    {
        X[i]=rand()%1001-500;
    }
    
    for(i=0; i<size; i++)
    {
        if(X[i]>0)
        {
            temp++;
            Y[temp]=X[i];
        }
    }
 
   
    for(i=0; i<temp; i++)
    {
        for(j=i+1; j<temp; j++)
        {
            if(Y[i]>Y[j])
            {
                z=Y[i];
                x=Y[j];
                Y[j]=z;
                Y[i]=x;
            }
        }
    }
    for(i=0; i<temp; i++) 
	{
		y[i]=Y[i];
	}
    for(i=0; i<size; i++)
    {
        if(X[i]<0)
        {
            temp1++;
            c[temp1]=X[i];
        }
    }
 
    for(i=0; i<temp1; i++)
    {
        for(j=i+1; j<temp1; j++)
        {
            if(c[i]<c[j])
            {
                z=c[i];
                x=c[j];
                c[i]=x;
                c[j]=z;
            }
        }
    }
 
    
    for(i=temp+1; i<size; i++)
	{
		y[i]=c[i-temp];
	} 
 
 	printf("Конечный массив : \n");   
    for(i=0; i<size; i++) 
	{
		printf("%d ", y[i]);
	}
 	getch();
    return 0;
}

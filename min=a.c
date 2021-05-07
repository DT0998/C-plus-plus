#include<math.h>
#include<stdio.h>
int main(){
    int a,b,c,d,min;

    printf("min=",min);
    scanf("%d",&min);

 printf("a=",a);
    scanf("%d",&a);

    printf("b=",b);
    scanf("%d",&b);
    
     printf("c=",c);
    scanf("%d",&c);
 
     printf("d=",d);
    scanf("%d",&d);
  
    if (a<min)
    {
      printf("min = a\n");
        
    }else if (b<min)
    {
        printf("min = b\n");
       
    }else if (c<min)
    {
       printf("min = c\n");
    }else if (d<min)
    {
        printf("min = d");
    }
    
    return 0;
    
}
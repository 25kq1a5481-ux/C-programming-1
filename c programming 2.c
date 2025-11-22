#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && b>=c){
printf("The biggest number is:%d\n",a);
}
else if(b>=a && b>=c){
printf ("The biggest number is %d\n",b);
}
else{
printf ("The biggest number is:%d\n",c);
}
getch();
}       
    
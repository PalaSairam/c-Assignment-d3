#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the values :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b>c){
    printf("%d",a);}
    else if(b>c){
    printf("%d",b);}
    else{
    printf("%d",c);}
}
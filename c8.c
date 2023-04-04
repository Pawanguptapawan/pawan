#include<stdio.h>
#include<conio.h>
int printarr(int *arr,int n);

int main(){
int srcarr[100],destarr[100],i,n;
int endarr[100];
int *srcptr=srcarr;
int *destptr=destarr;
int *endptr;

printf("\n enter the size:");
scanf("%d",&n);
printf("\n enter the sourcearr's elements");
for(i=0;i<n;i++){
    scanf("%d",&srcarr[i]);

}
endptr=&srcarr[n-1];
printf("\n srcarr before coping");
printarr(srcarr,n);
printf("\n destarr before coping");
printarr(destarr,n);
while(srcptr<=endptr)
{
    *destptr=*srcptr;
    srcptr++;
    destptr++;


}
printf("\n srcarr after coping");
printarr(srcarr,n);
printf("\n destarr after coping");
printarr(destarr,n);

}
int printarr(int *arr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",*(arr+i));

    }

}
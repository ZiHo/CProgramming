#include <stdio.h>
void main(){
    int ans,a,b,c;
    int Compare(int x,int y,int z);
    scanf("%d,%d,%d",&a,&b,&c);
    ans=Compare(a,b,c);
    printf("The biggest num is=%d\n",ans);
}

int Compare(int x,int y,int z){
    int s;
    if ((x>y) & (x>y)) s=x;
    else if ((y>x) & (y>z)) s=y;
    else s=z;
    return s;
}
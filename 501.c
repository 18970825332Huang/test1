#include <stdio.h>
#include <stdlib.h>
int main(){
    int N=5;
    int a[N];
    int i;
    int *p=a;
    for (i=0;i<=N-1;i++){
        scanf("%d",(p+i));
    }
/*    int j;
    for(j=0;j<=N-1;j++){
        printf("%d\n",*(p+j));
    }
*/  //检验数组中的元素哪些


    int k1,k2;
    for(k1=1;k1<=N-1;k1++){
        for(k2=1;k2<=N-1;k2++){
        int temp;
        if(*(p+k2)<*(p+k2-1)){
            temp=*(p+k2-1);
            *(p+k2-1)=*(p+k2);
            *(p+k2)=temp;
        }
    }
        }
    int j2;
    for(j2=0;j2<=N-1;j2++){
        printf("%d ",*(p+j2));
    }
    system("pause");
}
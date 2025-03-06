#include<stdio.h>
#include"header.h"
void add(char* x,char* y,int m){
    int z[50],q=0;
    for(int i=m-1;i>=0;i--){
        if(x[i]+y[i]+q-('0'+'0')>9){
            z[i]=(((int)(x[i]+y[i]+q))-('0'+'0'))%10;
            q=1;
        }
        else{
            z[i]=((int)(x[i]+y[i]+q))-('0'+'0');
            q=0;
        }
    }
    if(q==1){
        printf("%d",1);
    }
    for(int i=0;i<m;i++){
        printf("%d",z[i]);
    }
}

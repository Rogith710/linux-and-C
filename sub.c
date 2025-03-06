#include<stdio.h>
#include"header.h"
void sub(char* x,char* y,int m,int flag){
    int z[50],q=0;
    for(int i=m-1;i>=0;i--){
        if((int)(x[i]-y[i])-q<0){
            z[i]=10+(int)(x[i]-y[i])-q;
            q=1;
        }
        else{
            z[i]=(int)(x[i]-y[i])-q;
            q=0;
        }
    }
    if(flag==1){
        printf("-");
    }
    flag=1;
    for(int i=0;i<m;i++){
        if(flag==1 && z[i]==0){
            
        }
        else{
            flag=0;
            printf("%d",z[i]);
        }
        
    }
}

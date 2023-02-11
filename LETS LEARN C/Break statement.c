#include<stdio.h>
int main(){

int i,j;
                         ///initializing a local variable
for(i=1;i<=7;i++){
for(j=1;j<=7;j++){

printf("%d %d\n",i,j);

if(i==3 && j==5){
break;                             ///will break loop of j only
}
}                                ///end of for loop
return 0;
}
}

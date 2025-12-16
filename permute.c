#include <stdio.h> 
#include <stdlib.h> 
void permute(int *a,int*b){
     int c;
     c=*a;
    *a=*b;
    *b=c;
}
   
int main (){
    int first=10;
    int second=20;
    printf("first=%d,second=%d\n",first,second);
    permute(&first,&second);
    printf("first%d=second%d\n",first,second);

return 0; 
} 

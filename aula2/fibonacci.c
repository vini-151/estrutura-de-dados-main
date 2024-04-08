//fibonacci
#include <stdio.h>
#define ERRO -1

int func(int x){//função fib
    if (x < 0 ){
        return ERRO;
    }else if (x == 1 || x == 2){
        return (1);
    }else{
        return(func(x - 1) + func( x - 2));
    }
    
}


int main(){
system("cls");
int n = 25;
int fib = func(n);

printf("%d", fib);


}

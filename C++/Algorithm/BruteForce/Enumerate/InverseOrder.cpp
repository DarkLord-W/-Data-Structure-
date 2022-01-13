// 反序数
//设N是一个四位数，它的9倍恰好是其反序数
//(例如：1234的反序数是4321),求N的值

# include <iostream>
using namespace std;

int reverse(int x){
    int revx = 0;
    while(x!=0){
        revx *= 10;
        revx += x%10;
        x /= 10;
    }
    return revx;
}

int main(){
    for (int i=1000;i<9999;i++){
        if (i*9 == reverse(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
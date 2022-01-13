// 对称平方数
//打印所有不超过256，其平方具有对称性质的数
//如2，11就是这样的数，因为2*2=4，11*11=121
#include <iostream>
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
    for (int i =0;i<256;i++){
        if (i*i == reverse(i*i))
            printf("%d\n",i);
    }
    return 0;
}
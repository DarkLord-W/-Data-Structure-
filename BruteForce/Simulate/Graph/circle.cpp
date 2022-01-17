//叠筐
//输入一个三元组，分别是外筐尺寸n(0<n<80的奇整数)，中心花色字符，外筐花色字符，后二者都为ASCII可见字符
//INPUT: 5 A *
//OOTPUT:
/*
 AAA 
A***A
A*A*A
A***A
 AAA 
 */

#include <iostream>
using namespace std;


char matrix[80][80];

int main(){
    int n;
    char a,b;
    bool firstcase = true;
    scanf("%d%c%c",&n,&a,&b);

    for (int i = 0;i<= n/2;i++){
        int j = n-i-1;
        int  len = n-2*i;
        char c;
        if ((n/2 - i)%2 == 0){
            c=a;
        }
        else{
            c=b;
        }
        for (int k=0;k<len;k++){
            matrix[i][i+k] = c;
            matrix[i+k][i] = c;
            matrix[j][j-k] = c;
            matrix[j-k][j] =c;
        }
    }
    if (n != 1){
            matrix[0][0] = ' ';
            matrix[0][n-1] = ' ';
            matrix[n-1][0] = ' ';
            matrix[n-1][n-1] = ' ';
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
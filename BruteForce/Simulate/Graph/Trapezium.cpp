//输出梯形
//输入一个高度1<h<1000,输出一个高度h、上底边长为h的梯形
//h=4,形如
/*
      ****
    ******
  ********
**********
*/

#include <iostream>
using namespace std;



int main(){
    int h;
    scanf("%d",&h);
    int row = h;
    int col = h + (h -1)*2; //最底行数量
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if(j<col - (h + 2*i)){ //j数目不断增加，为空格数不断填充
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;

}
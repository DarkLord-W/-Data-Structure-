//从键盘输入任意字符串，统计并输出字符串中字母和数字的个数

#include <stdio.h>

int main(){
    char buff[20];
    int num=0;
    int chars=0;
    printf("INPUT");
    scanf(buff);
    for(int i=0;i<=9;i++){
        if (buff[i]>=0 && buff[i]<=9)
            num++;
        else if((buff[i]>+'a' && buff[i]<='z')||(buff[i]>='A'&& buff[i]<='Z'))
            chars++;
    }
    printf("NUM=%d  CHARS=%d",num,chars);
    return 0;
}

//输入年、月、日，计算该天是本年的第几天
//包括三个整数年(1<=Y<=3000)、月(1<=M<=12)、日(1<=D<=31)
//输入：
//1990 9 20
//输出：
//263
//TIPS:快速判断闰年:当年数不能被100整除时，若其被4或者能被400整出则为闰年,即：
//(year%4 == 0 && year %100 !=0) || year%400 == 0

#include <iostream>
using namespace std;

int judge_year(int year){
    return ((year%4 == 0 && year %100 !=0) || year%400 == 0);
}

int main(){
    int year,month,day,count=0;
    scanf("%d %d %d",&year,&month,&day);

    int daytab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };

    int r_year = judge_year(year);
    if (month - 1 == 0){
        count = day;
    }
    else{
        for (int i = 0;i<month;i++){
            count += daytab[r_year][i];
        }
        count += day;
    }

    printf("%d\n",count);

    return 0;
}
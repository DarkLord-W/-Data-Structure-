//设a、b、c均是0到9之间的数字
//abc、bcc是两个三位数，且有：abc+bcc=532
//求满足条件的所有a、b、c的值。

#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 9; a++)
    {
        for (int b = 0; b < 9; b++)
        {
            for (int c = 0; c < 9; c++)
            {
                if (100 * a + 110 * b + 12 * c == 532)
                {
                    printf("a=%d b=%d c=%d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}
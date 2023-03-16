#include <stdio.h>
int main()
{
        int a = 1;
        int b = 2;
        //逗号运算符,最终的结果是最后一个表达式的结果
        int c = (a++,b++,a+b,10,200,a+b,1000);
        printf("%d\n",c);
     //   system("pause");
        return 0;
}
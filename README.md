# Glimmer-CS--EASY---01-
##问题回答
1. 低级计算机语言也就是汇编语言，其优点在于与机器的相关性高，拥有更快的运行速度与高效率，但与高级计算机语言相比其编写与调试会相对更复杂，而更简单也就是高级计算机语言的优点。相较而言，我更喜欢高级计算机语言。
2. #include是预处理器指令，它告诉编译器将库stdio.h中的内容调用，包含在当前程序中。第二行表示声明了main这个函数，并返回一个整数，这是c语言运行的基础。第三行表示调用printf（）这个函数来打印输出一些内容。最后一行是给调用方返回一个数，算是main函数结束的要求。
3. 删去最后一行。
4. int是储存整数类型的方式，用int来声明可以让结果返回一个整数，而一般情况下都会是返回0，如果返回了其他整数，则可以用这种方式判断程序出错。
![image](https://github.com/user-attachments/assets/07fea3db-6f6c-4485-8e1c-b6ab36568ecf)
##hacker
~~~c
#include<stdio.h>
int main(void)
{   int i=0;
    int code=0;
    while(i==0)
    {
    printf("Show me your code,please!\n");
    scanf("%d",&code);
        if(code>=100000 && code<1000000)
        {
            printf("I am a super hacker!");
            i++;

        }else printf("Fake code!");
    }
    return 0;
}
~~~

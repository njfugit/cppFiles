/*
 * @Author: Jack
 * @Date: 2021-12-23 15:09:08
 * @LastEditTime: 2022-01-10 21:51:27
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /cppFiles/Class.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include "Time.h"
#include<iostream>

using namespace std;
/* class student{
    public:
        int number;
        char name[100];
}; */

/* class Time{
    public:
        int hour;
        int min;
        int second;

        void initTime(int tmphour, int tmpmin, int tmpsecond)
        {
            hour = tmphour;
            min = tmpmin;
            second = tmpsecond;
        }

}; */

int main()
{
    //一、综述：自定义数据类型
    //设计类时考虑角度
    //(1)站在设计和实现者的角度来考虑
    //(2)站在使用者角度考虑
    //(3)父类、子类
    
    //二、类基础
    //(1)一个类是用户自定义数据类型，可以想像成一个命名空间，包着一堆东西（成员变量、成员函数）
    //(2)一个类的构成：成员变量和成员函数（有许多特殊成员函数）
    //(3)访问类成员时，如果是类对象，我们使用对象名.成员名 来访问成员
    //如果指向这个对象的指针，我们使用 指针名->成员名来访问成员

    /* student someone;
    someone.number = 1000;

    student *psomeone = &someone;
    psomeone->number = 1002;

    cout<< someone.number <<endl; */

    //(4)public成员提供类的接口，供外界调用 private成员提供各种实现类功能的细节方法，不暴露给使用者，外界无法使用这些成员
    //(5)struct是成员默认为public的class,  struct A{.....}
    //********//(6)class成员默认是private, class A{....}
    //struct A{.....} 等价于calss A{public: .....}

    //三、成员函数
    Time mytime;
    mytime.initTime(5, 22, 12);
    cout<< mytime.hour <<endl;

    //四、对象的拷贝
    //对象本身可以拷贝
    //默认情况下，这种类对象的拷贝，是每个成员变量逐个拷贝
    //在Time类中定义适当的赋值运算符，就能控制对象的拷贝行为
    /* Time mytime1;
    mytime1.initTime(10, 8, 9);

    Time mytime2 = mytime1;
    Time mytime3(mytime1);
    Time mytime4{mytime1};
    Time mytime5 = {mytime1}; */
    //五、私有成员
    Time mtime;
    
    

    return 0;
}

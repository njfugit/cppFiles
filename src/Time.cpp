/*
 * @Author: Jack
 * @Date: 2022-01-10 20:22:10
 * @LastEditTime: 2022-01-11 16:48:09
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /cppFiles/src/Time.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include "Time.h"
#include<iostream>
//成员函数initTime的实现
//::是作用域运算符，表示initTime函数属于Time类
void Time::initTime(int tmphour, int tmpmin, int tmpsecond)
{
    hour = tmphour; //成员函数中可以直接使用成员变量名
                    //哪个对象调用该成员函数，这些成员变量就属于哪个对象，可以理解为类成员函数知道哪个对象调用自己。
    min = tmpmin;
    second = tmpsecond;
    initMillTime(0);
}
void Time::initMillTime(int mls)
{
    millisecond = mls;//成员函数可以访问成员变量，无论成员是私有还是公有
}

//构造函数的实现
Time::Time(int tmphour, int tmpmin, int tmpsecond)
    :hour(tmphour), min(tmpmin), second(tmpsecond), millisecond(0)
{
    /* hour = tmphour;
    min = tmpmin;
    second = tmpsecond;
    initMillTime(0); */
}
Time::Time(int tmphour)
{
    hour = tmphour;
    min = 12;
    second = 13;
    initMillTime(0);
}

Time::Time()
{
    hour = 12;
    min = 12;
    second = 12;
    initMillTime(12);
}
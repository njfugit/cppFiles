/*
 * @Author: Jack
 * @Date: 2021-12-23 15:09:08
 * @LastEditTime: 2022-01-10 22:32:07
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /cppFiles/Class2.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include "Time.h"
#include<iostream>

using namespace std;


int main()
{
    //一、构造函数
        //在类中有一种特殊的成员函数，它的名字和类名相同，
        //在创建类的对象时，这个特殊的成员函数会被系统自动调用，这个成员函数叫做“构造函数”
        //因为构造函数会被系统自动调用，简单理解为：构造函数的目的就是为了初始化类对象的数据成员
    //(1)构造函数没有返回值
    //(2)不可以手工调用构造函数，否则编译会出错
    //(3)正常情况下，构造函数被申明为public，因为创建对象时系统替我们调用构造函数，也说明构造函数是public类型
        //类缺省的成员是private类型，声明构造函数时要写public
    //(4)构造函数中如果有多个参数，创建对象时也要带上这些参数
    Time mytime1 = Time(1,2,3);//创建类对象
    Time mytime2(2, 4, 5);
    Time mytime3 = Time{1,2,3};
    Time mytime4{2, 7, 9};
    Time mytime5 = {2, 7, 9};



    return 0;
}

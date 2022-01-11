/*
 * @Author: Jack
 * @Date: 2021-12-23 15:09:08
 * @LastEditTime: 2022-01-11 16:15:40
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
    /* Time mytime1 = Time(1,2,3);//创建类对象
    Time mytime2(2, 4, 5);
    Time mytime3 = Time{1,2,3};
    Time mytime4{2, 7, 9};
    Time mytime5 = {2, 7, 9}; */

    //二、多个构造函数
        //一个类中可以有多个构造函数，提供多个初始化方法，但是多个构造函数之间总要有不一样的地方
    Time mytime11 = Time();//创建类对象,调用Time::Time()
    Time mytime12; 
    Time mytime13 = Time{};
    Time mytime14{};
    Time mytime15 = {};

    //对象拷贝
    Time mytime;//可以调用构造函数
    Time mytime21 = mytime;//后四个属于对象拷贝，没有调用构造函数，调用的不是传统意义的构造函数，实际调用拷贝构造函数
    Time mytime22(mytime); 
    Time mytime23 = {mytime};
    Time mytime24{mytime};

    //三、函数默认参数
    //(1)默认值只能放在函数声明中，除非该函数没有函数声明
    //(2)在具有多个参数的函数中指定默认值时，默认参数必须出现在不默认参数的右边，
        //一旦某个参数开始指定默认值，它的右边所有参数必须指定默认值
    
    //四、隐式转换和explicit
    /* Time mtime1 = 14; 
    Time mtime2 = (12, 13, 15, 16); */
    //上述定义编译系统肯定有个行为，把14这个数字转换成Time类型，调用单参数的构造函数
    //含糊不清的写法，存在临时对象隐式转换

    //如何强制系统不做隐式转换，如果构造函数声明中带有explicit，
    //则这个构造函数只能用于初始化和显示类型转换

    /* Time mytime1 = Time(1,2,3);//创建类对象
    Time mytime2(2, 4, 5);
    Time mytime3 = Time{1,2,3};
    Time mytime4{2, 7, 9}; */
    ////Time mytime5 = {2, 7, 9}; //隐式类型转换，构造函数加explicit后出现问题

    //对于单参数的构造函数，一般声明为explicit，除非有特别原因


    //五、构造函数初始化列表
    

    return 0;
}

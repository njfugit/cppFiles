 /*
 * @Author: Jack
 * @Date: 2022-01-15 23:43:08
 * @LastEditTime: 2022-01-24 21:02:34
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /cppFiles/Class3.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include "Time.h"
#include<iostream>

using namespace std;

int main()
{
    //一、在类定义中实现成员函数inline:类内的成员函数实现也叫类内的成员函数定义
    //直接在类的定义中实现的成员函数，会被当作inline内联函数来处理（能不能内联处理成功取决于编译器）
        
    //二、成员函数末尾的const
    //const: 常量，在成员函数末尾加上const,不但要在成员函数声明增加const，也要在成员函数定义中增加const
    //作用：告诉系统，这个成员函数不会修改该对象里任何成员变量的值
    //末尾加上const的成员函数也称之为“常量成员函数”
    
    const Time abc;//定义const对象，这种对象有限制
    //abc.initMillTime(1500);//不可以，initMillTime（）不是const成员函数，只能被非const对象调用

    
     



    return 0;
}
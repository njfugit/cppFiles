/*
 * @Author: Jack
 * @Date: 2021-12-15 21:44:57
 * @LastEditTime: 2021-12-20 22:30:01
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /C++/vector.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include <iostream>
#include <string>
#include<vector>

using namespace std;

struct student
{
    int num;
};

int main()
{
    //一、vector类型简介：标准库：集合或者动态数组，可以把若干对象（同一类型）放里面
    //vector可以把其他对象装进来，称为容器

  /*   vector<int> v; //v中保存的是整型数据　　//vector本身是个类模板  <int>实际是类模板的实例化过程
    vector<student> stulist;
    vector<vector<string>> strchuan; //该集合中每个元素又都是一个vector<string>对象，集合套集合
    vector<int *> v2;
    //不能装引用，
    //vector<int &> v3; //引用是别名，不是对象,不能放 */

    //二、定义和初始化vector对象
    //a)空vector
    vector<string> mystr; //创建一个string类型的空的vector对象（容器），目前这个mystr不包含任何元素
    //push_back();
    mystr.push_back("abcde");
    mystr.push_back("frfe");
    
    //b)元素拷贝的初始化方式
    vector<string> mystr2(mystr); //mystr元素拷贝给mystr2
    vector<string> mystr3 = mystr;

    //c) C++11标准中，用列表初始化方式给值，用{}括起来
    vector<string> mystr4 = {"avbf", "ihfiwe", "vervg"};

    //d)创建指定数量的元素，　有元素数量概念的东西一般用圆括号
    vector<int> ijihe(15, -300); //创建15个int类型的元素，每个元素的值是-300

    vector<int> ijihe2(10); //不给初值，每个元素默认给0（同理，字符串类型为""）

    //e)多种初始化方式，　有元素数量概念的东西一般用圆括号，　{}一般表示元素内容的概念,但不绝对
    vector<int> i1(10); //表示10个元素，每个元素值是缺省的0
    vector<int> i2{ 10 };//表示1个元素，该元素值是10
    vector<string> snor{"hello"};//一个元素，内容是hello
    vector<string> s22{ 10 }; //10个元素，每个元素是"".
    vector<string> s23{10, "hello"};//10个元素，每个元素是"hello".

	vector<int> i3(10, 1);//10个元素，每个元素的值为１
	vector<int> i4{10,  1};//2个元素，分别为10, 1
	//要想正常通过{}进行初始化，那么{}里面的值的类型，必须和vector后面的<>里面的元素类型相同
	
	//三、vector对象上的操作：最常用是不知道vector里面有多少元素，需要动态增加／减少
	//所以，一般来讲，先创建空vector
	//vector很多操作string 很类似
	//a)判断是否为空empty(),返回布尔值
	vector<int> ivec;
	if(ivec.empty())
	{
		cout<<"ivec为空" << endl;
	}
	//b)push_back:向vector中的末尾增加一个元素
	ivec.push_back(1);
    ivec.push_back(2);
    //c)size():返回元素个数
    cout << ivec.size() << endl;

    //d)clear:移除所有元素，将容器清空
    // ivec.clear();
    // cout << ivec.size() <<endl;
    //e)v[n]:返回v中的第n个元素（n是个整型值）代表位置，位置从0开始，必须小于size()，如果引用的下标超过这个范围，
    //或者用[]访问一个空的vector,那么就会产生不可预测的结果,编译器发现不了
    cout << ivec[1] << endl;
    
    //f)　＝　赋值
    vector<int> ivec2;
    ivec2 = ivec; //覆盖原有内容

    //g) ==,  !=
    //两个vector相等：元素数量相同，对应位置的元素值也一样，否则就是不等

    //h)范围for的应用
    vector<int> vecvalue{1,2,3,4,5};
    /* for(auto &vecitem : vecvalue)
    {
        vecitem *= 2; //扩大一倍

    }
    for(auto vecitem : vecvalue)
    {
            cout << vecitem << endl;        
     } */

    //3.1)范围for进一步讲解
   /*  for(auto vecitem : vecvalue)
    {
        vecvalue.push_back(44); //导致输出彻底乱套，千万不要这么干
        cout<< vecitem<<endl;
        
    } */
    //结论：在for语句中（遍历一个容器等等类似操作中），千万不要改动vector容器的容量，增加和删除都不可以。
    





    






    return 0;
}

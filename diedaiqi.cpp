/*
 * @Author: Jack
 * @Date: 2021-12-20 22:32:27
 * @LastEditTime: 2022-01-15 21:27:17
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /cppFiles/diedaiqi.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */
#include <iostream>
#include <string>
#include <vector>
#include<string.h>


using namespace std;

/* struct student
{
    int num;
}; */

struct conf
{
    char itemname[40];
    char itemcontent[100];
    /* data */
};

char *getinfo(vector<conf *> &conflist, const char *pitem)
{
    for(auto iter = conflist.begin(); iter != conflist.end(); ++iter )
    {
        if(strcmp((*iter)->itemname, pitem)== 0)
        {
            return (*iter)->itemcontent;
        }
    }
    return nullptr;
}

int main()
{
    // 一、迭代器简介
    //迭代器是一种遍历容器内元素的数据类型，这种数据类型有点像指针，可理解为迭代器指向容器中的某个元素
    //string, vector很少用[]去访问，常用迭代器去访问（更通用）
    //通过迭代器，可以读容器中的元素值，读string中的每个字符，还可以修改某个迭代器所指向的元素值
    //++, --
    //list, map,用迭代器去访问容器中的元素。

    //二、容器的迭代器类型
    /* vector<int> ivec={100, 200, 300};
    vector<int>::iterator iter;  */
    //定义迭代器，也必须是vector<int>

    //可以把整个的vector<int>::iterator 理解成一个类型，这种类型专门应用于迭代器
    //用这个类型去定义一个变量时，这个变量就是一个迭代器（这里的iter就是）

    //三、迭代器begin()/end()操作，反向迭代器rbegin()/rend()操作
    //　begin()/end()用来返回　迭代类型　rbegin()/rend()用来返回　迭代类型
    //a) begin()返回迭代类型(理解成返回一个迭代器)
    //iter = ivec.begin(); //如果容器中有元素，则begin返回的迭代器，指向容器中的第一个元素
    //相当于iter指向了ivec[0]

    //b)  end()返回迭代类型(理解成返回一个迭代器)
    //iter = ivec.end(); //end()返回的迭代器指向的并不是末端元素，而是末端元素的后边，这个后边怎么理解？
    //理解为end()指向的是一个不存在的元素。

    //c) 如果一个容器为空的话，那么begin()和end()返回的迭代器相同

    //d)
    /* vector<int> iv={100, 200, 300};
    for(vector<int> ::iterator iter = iv.begin(); iter != iv.end(); iter++)
    {
        cout<< *iter <<endl;
    } */
    //e)反向迭代器，从后往前遍历　用rbegin()/rend()
    //rbegin()返回一个反向迭代器，指向反向迭代器的第一个元素
    //rend()返回一个反向迭代器,指向反向迭代器的最后元素的下一个位置。
    /* for(vector<int>::reverse_iterator riter = iv.rbegin(); riter != iv.rend(); riter++)
    {
        cout<< *riter<<endl;
    } */

    //四、迭代器运算符
    //a)*iter：返回迭代器iter所指向元素的引用，必须保证迭代器指向有效的容器元素，不能指向end(),因为end()是末端元素的后边，不存在的元素。

    /*  vector<int> ::iterator iter = iv.end();
    cout<< *iter<<endl;  */
    // 非法操作

    //b) iter++ / ++iter指向下一个元素，已经指向end()的时候就不能再++

    //c)  iter-- / --iter指向上一个元素，已经指向begin())的时候就不能再--

    //d) == /!= 判断两个迭代器是否相等

    //e)
    /* vector<student> sv;
    student mystu;
    mystu.num = 100;
    sv.push_back(mystu);

    vector<student>::iterator iter;
    iter = sv.begin();
    cout << (*iter).num <<endl;
    cout << iter->num <<endl; */

    //五、const_iter迭代器
    //const_iter迭代器,  表示值不能改变的意思,表示这个迭代器指向的元素值不能变
    //不是表示这个迭代器本身不能改变,也就是说,迭代器本身可以不断指向下一个元素
    //只能从容器中读取元素,不能修改元素值,更像是个常量指针
    //const vector<int> iv={100, 200, 300};
    /* vector<int>::const_iterator iter;
    for(iter  = iv.begin(); iter != iv.end(); ++iter)
    {
        //*iter = 4;  //报错
        cout<< *iter <<endl; //可以正常读
    } */

    //(5.1) cbegin()和cend()操作
    //c++11新引入的两个新函数 cbegin(), cend(), 和begin(),end()类似
    //cbegin(), cend()返回的是常量迭代器
    /* for(auto iter = iv.cbegin(); iter != iv.cend(); ++iter)
    {
shi       //*iter = 4; //报错,不能给常量赋值 说明cbegin()返回的常量迭代器
        cout << *iter <<endl;
    }
 */
    //六、迭代器失效问题
    //vector<int> vecvalue{1,2,3,4,5};
    /* for(auto vecitem : vecvalue)
    {
        vecvalue.push_back(33);
        cout << vecitem <<endl;
    } */
    //与下面等价
    /* for(auto beg = vecvalue.begin(), end = vecvalue.end(); beg != vecvalue.end(); ++beg)
    {
        //vecvalue.push_back(33);//会产生混乱
        cout << *beg <<endl;
    } */
    //结论：操作迭代器过程中（使用迭代器这种循环体），千万不要改变容器的`容量，（不要增加或者删除容器中的元素）
    //往容器中增加或者删除元素,这些操作可能会使指向容器元素的指针、引用、迭代器失效。
    //失效表示不能再代表任何容器中的元素，一旦使用失效的东西，程序可能会直接崩溃

    /*  for(auto beg = vecvalue.begin(), end = vecvalue.end(); beg != vecvalue.end(); ++beg)
    {
        vecvalue.push_back(33);
        break;
    }
    for(auto beg = vecvalue.begin(), end = vecvalue.end(); beg != vecvalue.end(); ++beg)
    {
        //.....
    }
 */

    //（6.1）灾难程序演示1
    //vector<int> vecvalue{1, 2, 3, 4, 5};
    //auto beg = vecvalue.begin();
    //auto end = vecvalue.end();
    /* while (beg != end)
{
    cout << *beg << endl;
    //假如往begin位置插入新值，可以用insert
    vecvalue.insert(beg, 80); //插入新值，第一个参数是插入位置，第二个参数是插入元素
                                                        //插入数据导致迭代器失效，具体哪个迭代器失效取决于内部的实现原理（可以查资料）
                                                        //不太明确哪个迭代器失效，最明智的做法：一插入数据，插入完毕就break出循环体
    break;              //最明智的防止迭代器失效的方法，否则程序极有可能崩溃
    ++beg;
}
beg = vecvalue.begin();
end = vecvalue.end();
while (beg != end)
{
     cout << *beg << endl;
     ++beg;
} */
    /* int icount = 0;
    while (beg != vecvalue.end()) //每次更新end(),防止指针失效
    {
        beg = vecvalue.insert(beg, icount + 80);
        icount++;
        if (icount > 10)
        {
            break;
        }
        ++beg;
    }
 */
 //（6.2）灾难程序演示2
//vector<int> iv={1, 2, 3, 4, 5};

/* for(auto iter = iv.begin(); iter != iv.end(); ++iter)
{
    iv.erase(iter); //erase函数，移除iter位置的上元素，返回下一个元素位置
} */
/* vector<int>::iterator iter = iv.begin();
while(iter != iv.end())
{
    iter = iv.erase(iter);
} */
/* while (!iv.empty())
{
    auto iter = iv.begin(); //因为不为空，所以返回begin()没问题
    iv.erase(iter);
    
} */
//七、范例演示
//7.1)迭代器遍历一下string类型数据
/* string str("I Love China!");
for(auto iter = str.begin(); iter != str.end(); ++iter)
{
    *iter = toupper(*iter);
}
cout << str << endl; */

//7.2)vector容器常用操作和内存释放
//实践程序：
//ServerName = 1区  //表示服务器名称
//ServeID = 100000    //表示服务器ID

conf *pconf1 = new conf;
strcpy(pconf1->itemname, "ServerName");
strcpy(pconf1->itemcontent, "1区");

conf *pconf2 = new conf;
strcpy(pconf2->itemname, "ServeID");
strcpy(pconf2->itemcontent, "100000");

vector<conf *> conflist;
conflist.push_back(pconf1);
conflist.push_back(pconf2);

char *p_tmp = getinfo(conflist, "ServerName");
if(p_tmp != nullptr)
{
    cout << p_tmp <<endl;
}

//要释放内存，自己new的要自己释放，否则会造成内存泄漏
std::vector<conf *> ::iterator pos;
for(pos = conflist.begin(); pos != conflist.end(); ++pos)
{
    delete (*pos); //*pos才是指针，这句必须要有
}
conflist.clear();//这句要不要都行


    return 0;
}
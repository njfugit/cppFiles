/*
 * @Author: Jack
 * @Date: 2022-01-10 20:21:43
 * @LastEditTime: 2022-01-10 22:22:38
 * @LastEditors: your name
 * @Description: koro1FileHeader
 * @FilePath: /cppFiles/include/Time.h
 * 可以输入预定的版权声明、个性签名、空行等
 */
#ifndef __MYTIME__
#define __MYTIME__
class Time{  //定义时间类
    public:
        Time(int tmphour, int tmpmin, int tmpsecond); //构造函数
    private:
        int millisecond; //毫秒
        void initMillTime(int mls);
    public:
        int hour;
        int min;
        int second;
        void initTime(int tmphour, int tmpmin, int tmpsecond);
    
};

#endif
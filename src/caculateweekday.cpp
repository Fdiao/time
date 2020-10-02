/* 
 *Copyright(C),2020,NEFU
 *FileName: caculateweekday.cpp
 *Author:   d_chen
 *Version:  1.0
 *Date:     2020.10.02
 *Description:计算具体某年某月某日为周几，返回数字形式，例如计算结果为周一则返回数字1
               //用于主要说明此程序文件完成的主要功能
               //与其他模块或函数的接口、输出值、取值范围、
               //含义及参数间的控制、顺序、独立及依赖关系
 *Others:  //其他内容说明
 *Function List:  //主要函数列表，每条记录应包含函数名及功能简要说明
    1.int CaculateWeekDay(int y,int m, int d);
        参数1：年
        参数2：月
        参数3：日
        返回值: 返回该日期的星期数
 *History:  //修改历史记录列表，每条修改记录应包含修改日期、修改者及修改内容简介

 *Return:
        周的数字形式
    
*/


#include "func.h"

int CaculateWeekDay(int y,int m, int d)
{
    if(m==1||m==2) {
        m+=12;
        y--;
    }
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    return iWeek + 1;
}
/* 
 *Copyright(C),2020,NEFU
 *FileName: isleapyear.cpp
 *Author:   d_chen
 *Version:  1.0
 *Date:     2020.10.03
 *Description:判断是否为闰年
               //用于主要说明此程序文件完成的主要功能
               //与其他模块或函数的接口、输出值、取值范围、
               //含义及参数间的控制、顺序、独立及依赖关系
 *Others:  //其他内容说明
 *Function List:  //主要函数列表，每条记录应包含函数名及功能简要说明
    1.int isLeapYear(int year);
        参数1:年
        返回值: 1:为闰年
                2:非闰年
 *History:  //修改历史记录列表，每条修改记录应包含修改日期、修改者及修改内容简介

 *Return:
        1:为闰年
        2:非闰年
*/

int isLeapYear(int year){
    if (((( year%4 == 0 ) && ( year%100 != 0 )) || ( year%400 == 0 ))){
        return 1;
    }
    return 0;
}
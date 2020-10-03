/* 
 *Copyright(C),2020,NEFU
 *FileName: checkmonth.cpp
 *Author:   d_chen
 *Version:  1.0
 *Date:     2020.10.03
 *Description:判断月份是否输入正确，正确范围为1~12
               //用于主要说明此程序文件完成的主要功能
               //与其他模块或函数的接口、输出值、取值范围、
               //含义及参数间的控制、顺序、独立及依赖关系
 *Others:  //其他内容说明
 *Function List:  //主要函数列表，每条记录应包含函数名及功能简要说明
    1.int checkmonth(int month);
        参数1:int 月
        返回值: 0:正确
                1:错误
 *History:  //修改历史记录列表，每条修改记录应包含修改日期、修改者及修改内容简介

 *Return:
        0:正确
        1:错误
*/


#include "common.h"

int checkmonth(int month){
    if(month < 1 || month > 12){
        printf("error!please input a month:(eg:1~12)\n");
        return 1;
    }
    return 0;
}


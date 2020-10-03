/* 
 *Copyright(C),2020,NEFU
 *FileName: time.cpp
 *Author:   d_chen
 *Version:  2.0
 *Date:     2020.10.02
 *Description:按说明输入年,月,早晚时间的时间前缀,按随机数生成有效时间。
              周天不签到，默认为00:00
               //用于主要说明此程序文件完成的主要功能
               //与其他模块或函数的接口、输出值、取值范围、
               //含义及参数间的控制、顺序、独立及依赖关系
 *Others:  //其他内容说明
 *Function List:  //主要函数列表，每条记录应包含函数名及功能简要说明
    1.int CaculateWeekDay(int y,int m, int d);
        参数1:int 年
        参数2:int 月
        参数3:int 日
        返回值: 返回该日期的星期数
    2.int isLeapYear(int year);
        参数1:int 年
        返回值:1:闰年，2月为29天
                2:非闰年，2月为28天
    3.int checkmonth(int month);
        参数1:int 月
        返回值:1:月份输入错误,重新输入
               0:月份输入正确
    4.void printTime(char time_amorpm[][7],int month,int year,int lyear);
        参数1:char* 签到签退时间前缀
        参数2:int 月
        参数3:int 年
        参数4:int 是否为闰月，1为是，0为否
 *History:  //修改历史记录列表，每条修改记录应包含修改日期、修改者及修改内容简介
            2020.10.3  模块化，添加判断是否闰年函数，判断输入月份是否正确函数,打印时间函数

 *Return:
    
*/
#include "common.h"
#include "func.h"

int main()
{
    int year = -1;
    int month = -1;
    char time_amorpm[2][7] = {"",""};
    int lyear = -1;
    int month_sts = 1;
    
    printf("please input years:");
    scanf("%d",&year);
    
    while(month_sts == 1){
        printf("please input month:");
        scanf("%d",&month);
        month_sts = checkmonth(month);
    }

    printf("plese input morning time:  eg:7:5,则生成7:50-7:59之间的时间,下同\n");
    scanf("%s",time_amorpm[1]);
    
    printf("plese input evening time:\n");
    scanf("%s",time_amorpm[2]);
    
    lyear = isLeapYear(year);
    printTime(time_amorpm,month,year,lyear);
    
    return 0;
}

/* 
 *Copyright(C),2020,NEFU
 *FileName: time
 *Author:   d_chen
 *Version:  1.0
 *Date:     2020.10.02
 *Description:按说明输入年,月,早晚时间的时间前缀,按随机数生成有效时间。
              周天不签到，默认为00:00
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
        1:月份输入错误
    
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "func.h"

int main()
{
    int day;
    int year = -1;
    int month = -1;
    int MonthDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int weekDay = -1;
    char morning_time[5] = "x:x";
    char evening_time[5] = "x:x";

    
    printf("please input years:");
    scanf("%d",&year);
    
    printf("please input month:");
    scanf("%d",&month);
    
    printf("plese input morning time:  eg:7:5,则生成7:50-7:59之间的时间,下同\n");
    scanf("%s",morning_time);
    
    printf("plese input evening time:\n");
    scanf("%s",evening_time);
    
    //以时间为种子生成随机数
    srand((unsigned)time(NULL));
    
    if(month < 1 || month > 12){
        printf("error!please input a month:(eg:1~12)\n");
        return 1;
    }
    
    //判断闰年
    if (((( year%4 == 0 ) && ( year%100 != 0 )) || ( year%400 == 0 ))){
        MonthDay[1]=29;
    }

    printf("Morning:\n");
    for(day = 1; day <= MonthDay[month-1]; day++)
    {
        weekDay = CaculateWeekDay(year,month,day);
        if(weekDay != 7){
            printf("%d月%d日  %s%i",month,day,morning_time,rand()%10);
            printf("\n");
        }else{
            printf("%d月%d日  00:00\n",month,day);

        }
    }
    
    printf("Evening:\n");

    for(day = 1; day <= MonthDay[month-1]; day++)
    {
        weekDay = CaculateWeekDay(year,month,day);
        if(weekDay != 7){
            printf("%d月%d日  %s%i",month,day,evening_time,rand()%10);
            printf("\n");
        }else{
            printf("%d月%d日  00:00\n",month,day);
        }
    }
    return 0;
}

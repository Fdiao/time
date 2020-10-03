/* 
 *Copyright(C),2020,NEFU
 *FileName: printtime.cpp
 *Author:   d_chen
 *Version:  1.0
 *Date:     2020.10.03
 *Description:打印签到签退时间,以时间为种子随机产生0~9随机数,与输入时间前缀生成有效时间
               //用于主要说明此程序文件完成的主要功能
               //与其他模块或函数的接口、输出值、取值范围、
               //含义及参数间的控制、顺序、独立及依赖关系
 *Others:  //其他内容说明
 *Function List:  //主要函数列表,每条记录应包含函数名及功能简要说明
    1.void printTime(char time_amorpm[][7],int month,int year,int lyear);
        参数1:char* 签到签退时间前缀
        参数2:int 月        
        参数3:int 年        
        参数4:int 是否为闰月,1为是,0为否           
 *History:  //修改历史记录列表,每条修改记录应包含修改日期、修改者及修改内容简介

 *Return:

*/


#include "common.h"
#include <time.h>
#include "func.h"

void printTime(char time_amorpm[][7],int month,int year,int lyear){
    int weekDay;
    int day;
    char dayTime[][8] = {"Morning","Evening"};
    int MonthDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(lyear == 1){
        MonthDay[1]=29;
    }
    
    srand((unsigned)time(NULL));

    for(int i = 0; i < 2; i++){
        printf("%s:\n",dayTime[i]);
        for(day = 1; day <= MonthDay[month-1]; day++)
        {
            weekDay = CaculateWeekDay(year,month,day);
            if(weekDay != 7){
                printf("%d月%d日  %s%i",month,day,time_amorpm[i+1],rand()%10);
                printf("\n");
            }else{
                printf("%d月%d日  00:00\n",month,day);
    
            }
        }
    }
}

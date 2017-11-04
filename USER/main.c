#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "rtc.h"
#include <stdbool.h>
void setup()
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);//设置系统中断优先级分组4
	delay_init(168);    //初始化延时函数
	uart_init(38400);
	My_RTC_Init();
	millisInit();
}

int main(void)
{ 
	setup();
	while(1)
	{
		printf("secs = %lu\r\n",secs());
		printf("millis = %llu\r\n\r\n",millis());
	}	
}

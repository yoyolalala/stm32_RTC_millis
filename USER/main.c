#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "rtc.h"
#include <stdbool.h>
void setup()
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);//����ϵͳ�ж����ȼ�����4
	delay_init(168);    //��ʼ����ʱ����
	uart_init(38400);
	My_RTC_Init();
}

int main(void)
{ 
	setup();
	while(1)
	{
		printf("secs = %lu\r\n",secs());
	}	
}

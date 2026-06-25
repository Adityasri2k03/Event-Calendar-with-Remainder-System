#include"headers.h"

int  getFirstDayOfYear(int year)
{
	int day;
	day=(year * 365 + ((year-1) / 4) - ((year - 1) / 100) + ((year - 1) / 400)) % 7;
	return day;
}
void PrintCalendar(int year)
{
	char *months[] = {"January","February","March","April","May",
		"June","July","August","September","October","November","December"};
	
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, j, totalDays, weekDay = 0;
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		daysInMonth[1] = 29;
	weekDay = getFirstDayOfYear(year);
	
	for(i = 0; i < 12; i++) 
	{
		printf("\n  ------------ %s ------------\n", months[i]);
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
		
		for (j = 0; j < weekDay; j++) 
		{
			printf("     ");
		}
		totalDays = daysInMonth[i];
		
		for (j = 1; j <= totalDays; j++) 
		{
			printf("%5d", j);
			
			if(++weekDay > 6) 
			{
				weekDay = 0;
				printf("\n");
			}
		}
		if (weekDay != 0)
			printf("\n");
	}
}


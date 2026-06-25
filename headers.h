#ifndef _HEADERS_H
#define _HEADERS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct event
{
        char id[20];
        char title[50];
        char day[3];
        char month[3];
        char year[5];
        char description[100];
        struct event *next;
}EH;

extern EH *head;

void AddEvent();
void DeleteEvent(char *);
void EditEvent();
void FindEvent(char *);
void PrintCalendar(int);
void SaveEvents();
void SyncEvents();
void ViewEvents();

#endif

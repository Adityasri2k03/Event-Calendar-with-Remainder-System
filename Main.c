#include"headers.h"

EH *head=NULL;
int count=0;

int main()
{
	char choice;
	while(1)
	{
		printf("------------------------------MENU----------------------------------------\n");
		printf( "a/A : Add a new event\t\t\t"
			"e/E : Edit Event\n"
			"p/P : Print calendar\t\t\t"
			"v/V : View all saved events\n"
			"d/D : Delete an event\t\t\t"
			"s/S : Save all events to a file\n"
			"l/L : sync events from file\t\t"
			"u/U : Upcoming event reminders\n"
			"f/F : Find events on a specific date\t"
			"q/Q : Quit the application\n");
		printf("--------------------------------------------------------------------------\n");
		
		printf("\nEnter the choice: ");
		scanf(" %c",&choice);
		printf("\n");
		switch (choice)
		{
			case 'a': AddEvent();
				  break;
			case 'e': {
					  if (head==NULL)
					  {
						  printf("Nothing to see here.\n\n");
					  }
					  else
					  	EditEvent();
				  }
				  break;
			case 'p': {
					  int year;
					  printf("enter the year: ");
					  scanf("%d",&year);
					  PrintCalendar(year);
				  }
				  break;
			case 'v': ViewEvents();
				  break;
			case 'd': {
					  if (head==NULL)
					  {
						  printf("Nothing to see here.\n\n");
					  }
					  else
					  {
					  	char Id[20];
					  	printf("enter the event ID to be deleted: ");
					  	scanf("%s",Id);
					  	printf("\n");
					  	DeleteEvent(Id);
					  }
				  }
				  break;
			case 's': SaveEvents();
				  break;
			case 'l': {
					  if(count==0)
					  {
						  SyncEvents();
						  count=1;
					  }
					  else
						  printf("events are already synced.\n\n");
				  }
				  break;
			case 'u': {
					  if(head==NULL)
					  {
						  puts("No upcoming events.\n");
					  }
					  else
					  {
						  puts("Upcoming Events:\n");
						  ViewEvents();
					  }
				  }
				  break;
			case 'f': {
					  if (head==NULL)
					  {
						  printf("Nothing to see here.\n\n");
					  }
					  else
					  {
					  	char Title[20];
        	                          	printf("enter the event title to be searched: ");
        	                          	scanf("%s",Title);
					  	printf("\n");
					  	FindEvent(Title);
					  }
				  }
				  break;
			case 'q': exit(0);
	
			default:printf("Invalid input. Please try again.\n\n");
		}
	}
}


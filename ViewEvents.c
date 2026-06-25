#include"headers.h"

void ViewEvents()
{
	if(head==NULL)
		printf("Nothing to see here.\n\n");
	else
	{
		EH *temp=head;
		while(temp)
		{
			printf("Event ID: %s\n",temp->id);
			printf("Event Title: %s\n",temp->title);
			printf("Event Date: %s/%s/%s\n",temp->day,temp->month,temp->year);
			printf("Event Description: %s\n",temp->description);

			temp=temp->next;
			printf("\n");
		}
	}
}


#include"headers.h"

void EditEvent()
{
	EH *temp=head;
	char ID[20];
	if(head==NULL)
	{
		printf("Nothing to see here.\n\n");
		return;
	}
	printf("enter which event you want to edit (ID): ");
	scanf("%s",ID);
	//else
	{
		while(temp)
		{
			if(strcmp(temp->id,ID)==0)
			{
				char what[20];
				printf("Event found.\n\ntitle\ndate\ndescription\n\nWhat do you want to Edit: ");
				scanf("%s",what);
				if(strcmp(what,"title")==0)
				{
					printf("enter new Title: ");
					scanf("%s",temp->title);
				}
				else if (strcmp(what,"date")==0)
				{
					printf("enter new date(DD MM YYYY): ");
					scanf("%s%s%s",temp->day,temp->month,temp->year);
				}
				else if (strcmp(what,"description")==0)
				{
					printf("enter new description: ");
					scanf(" %[^\n]",temp->description);
				}
				else
					printf("invalid choice.\n");
	
				printf("\nEvent Edited Successfully.\n\n");
				return;
			}
			temp=temp->next;
		}
		printf("Event not found.\n\n");
	}
}


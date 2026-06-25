#include"headers.h"

void SyncEvents()
{
	FILE *fp;
	EH buff;
	EH *temp=head;
	EH *node;
	fp=fopen("events.dat","rb");
	if (fp==NULL)
	{
		printf("file not existing.\n\n");
		return;
	}
	while(fread(&buff,sizeof(EH),1,fp))
	{
		node=calloc(1,sizeof(EH));
		*node=buff;
		node->next=NULL;
		if (head==NULL)
		{
			head=node;
		}
		else
		{	temp=head;
			while(temp->next)
			{	
				temp=temp->next;
			}
			temp->next=node;
		}
	}
	fclose(fp);
	printf("events are synced.\n\n");
}


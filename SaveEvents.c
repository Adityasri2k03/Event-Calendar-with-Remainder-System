#include"headers.h"

void SaveEvents()
{
	FILE *fp;
	EH *temp=head;
	fp=fopen("events.dat","wb");
	if (fp==NULL)
	{
		printf("File creation failed.\n\n");
		return;
	}
	while(temp)
	{
		fwrite(temp,sizeof(EH),1,fp);
		temp=temp->next;
	}
	fclose(fp);
	printf("events are saved.\n\n");
}


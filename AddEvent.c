void AddEvent()
{
	EH *t = head;
    	EH *temp = head;
    	EH *node;

    	node = calloc(1, sizeof(EH));

    	printf("Enter the ID: ");
    	scanf("%s", node->id);

    	// Check for duplicate ID
    	while(t)
    	{
		if(strcmp(t->id, node->id) == 0)
        	{
            		printf("Event ID already exists.\n\n");
            		free(node);
            		return;
        	}
        	t = t->next;
    	}

    	printf("Enter the title: ");
    	scanf(" %[^\n]", node->title);

    	printf("Enter date of event (DD MM YYYY): ");
 	scanf("%s %s %s", node->day, node->month, node->year);

    	printf("Event description: ");
    	scanf(" %[^\n]", node->description);

    	printf("\n");

    	if(head == NULL)
        	head = node;
    	else
    	{
        	while(temp->next)
            	temp = temp->next;

        	temp->next = node;
    	}

    	printf("Event added successfully.\n\n");
}
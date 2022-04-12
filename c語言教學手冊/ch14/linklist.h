struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *createList(int *arr, int len); //�إ��쵲(next), �æ^��NODE������ 
void printfList(NODE *);
void freeList(NODE *);
void insertNode(NODE *, int n); //�b�`�Inode���ᴡ�J1�ӷs���`�I, data�]�w��item 
NODE *searchNode(NODE  *, int); //�j�M�`�I���
NODE  *deleteNode(NODE *, NODE *); //�R���`�Inode, �í��s�^��first 

NODE *createList(int *arr, int len)
{
	int i;
	NODE *first, *current, *previous;
	for(i=0;i<len;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		current->data = arr[i];
		if(i==0)
			first = current;
		else
			previous->next = current;
		current->next = NULL;
		previous = current;
	}
	
	return first;
}

void printfList(NODE *first)
{
	NODE *node = first;
	if(first == NULL)
		printf("List is empty.\n");
	else
	{
		while(node!=NULL)
		{
			printf("%3d", node->data);
			node = node->next;
		}
		printf("\n");
	}
}
void freeList(NODE *first)
{
	NODE *current = first;
	NODE *tmp;
	
	while(current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}

NODE *searchNode(NODE *first, int item) //���æ^��node��pointer 
{
	NODE *node = first;
	while(node!= NULL)
	{
		if(node->data == item)
			return node;
		else
			node = node->next;
	}
	return NULL; //�S��� 
}

void insertNode(NODE *node, int item)	//�b�`�Inode���ᴡ�J1�ӷs���`�I, data�]�w��item 
{
	NODE *newnode = (NODE *)malloc(sizeof(NODE));
	newnode->data = item;
	newnode->next = node->next;
	node->next = newnode;
}

NODE  *deleteNode(NODE *first, NODE *node) //�R���`�Inode, �í��s�^��first 
{
	NODE *ptr = first;
	if(first == NULL)
	{
		printf("Nothing to delete\n");
		return NULL;
	}
	if(node == first)
	{
		first = first->next; 
	}
	else
	{
		while(ptr->next != node) //�٨S���n�R����node
			ptr=ptr->next;
		ptr->next = node->next;
	}
	free(node);
	return first;
}



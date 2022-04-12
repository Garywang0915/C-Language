struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *createList(int *arr, int len); //建立鏈結(next), 並回傳NODE的指標 
void printfList(NODE *);
void freeList(NODE *);
void insertNode(NODE *, int n); //在節點node之後插入1個新的節點, data設定為item 
NODE *searchNode(NODE  *, int); //搜尋節點函數
NODE  *deleteNode(NODE *, NODE *); //刪除節點node, 並重新回傳first 

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

NODE *searchNode(NODE *first, int item) //找到並回傳node的pointer 
{
	NODE *node = first;
	while(node!= NULL)
	{
		if(node->data == item)
			return node;
		else
			node = node->next;
	}
	return NULL; //沒找到 
}

void insertNode(NODE *node, int item)	//在節點node之後插入1個新的節點, data設定為item 
{
	NODE *newnode = (NODE *)malloc(sizeof(NODE));
	newnode->data = item;
	newnode->next = node->next;
	node->next = newnode;
}

NODE  *deleteNode(NODE *first, NODE *node) //刪除節點node, 並重新回傳first 
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
		while(ptr->next != node) //還沒找到要刪除的node
			ptr=ptr->next;
		ptr->next = node->next;
	}
	free(node);
	return first;
}



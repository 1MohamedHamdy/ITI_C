#include<stdio.h>
#include<stdlib.h>

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;

typedef float f32;
typedef double f64;
#define Null ((void*)0)
typedef struct node node ;
void add_node(node *ptr);
node *create_node(u16 node_val);
u16 count_nodes(node *head);
void print_list();
// node *search(u32 value);
void add_at_pos(u16 data_val,u8 pos);
void add_at_first(u16 data_val,u8 pos);
void add_at_end(u16 data_val,u8 pos);
node *search(u16 value,u8 *ind);
void deleteNode(node ** head_ref, int key);


struct node{
	u16 data ;
	node *Next ;
};
node *first = Null ;
node *last  = Null; 
void main()
{
	
	u8 choice;
	u16 value ;
	u16 insert;
	u8 insertedindex;
	u16 deleted ;
	u16 counter ;
	node *current_list;
	node *searcher;

	u8 countinue=1;
	
	while(countinue){	
		printf("To add node enter 0\nTo print the linked list enter 1\nTo print number of nodes enter 2\nTo insert node enter 3\nTo delete node by value enter 4\nTo exit press to 5\n");
		printf("Your Choice: ");
		scanf("%d",&choice);
		printf("--------------------------------------\n");
		
		switch(choice){
			case 0:
				printf("Please Enter Node Value: ");
				scanf("%d",&value);
				current_list = create_node(value);
				add_node(current_list);
				printf("Node Added Thank You\n");
				printf("--------------------------------------\n");
				break;
			case 1:
				print_list();
				printf("--------------------------------------\n");
				break;
			case 2:
				counter = count_nodes(first);
				printf("Number of nodes = %d\n",counter);
				printf("--------------------------------------\n");
				break;
			case 3:	
				printf("Please Enter Node index :");
				scanf("%d",&insertedindex);
				printf("Please Enter Node Value :");
				scanf("%d",&insert);
				if(insertedindex==1){
					add_at_first(insert,insertedindex);
					
				}
				else if(insertedindex==counter+1){
					add_at_end(insert,insertedindex);
					
				}
				else{
					
					add_at_pos(insert,insertedindex);
				}
				printf("node inserted Sucessfully\n");
				printf("--------------------------------------\n");
				break;
			case 4:
				printf("Please Enter Value :");
				scanf("%d",&deleted);
				deleteNode(&first, deleted);
				printf("node deleted Sucessfully\n");
				printf("--------------------------------------\n");				
				break;
				

			case 5: 
				countinue = 0;
				printf("Thank You\n");
				printf("Good Bye\n");
				
				break;
			default:
				printf("Invalid Choice,please try again!\n");
				printf("--------------------------------------\n");
				
			
			
		}
	}
	
	
	
	
}
node *create_node(u16 node_val){
	node *current = (node*)malloc(sizeof(node));
	current->data = node_val ;
	current->Next = Null ;	
	return current ;
}
void add_node(node *ptr){
	if(first == Null){
		first = last = ptr ;
	}		
	else{
		last->Next = ptr ;
		last = ptr ;
	}
	
}


u16 count_nodes(node *head){
	u8 count = 0;
	if(head == Null){
		printf("Linked List is empty\n");
	}
	node *ptr = Null;
	ptr = head ;
	while(ptr!=Null){
		count++;
		ptr = ptr->Next ;
	}
	return count;
}
void print_list(){
	u8 count = 0;
	if(first == Null){
		printf("Linked List is empty\n");
	}
	node *ptr = Null;
	ptr = first ;
	while(ptr!=Null){
		count++;
		printf("Node Number %d = %d\n",count,ptr->data);
		ptr = ptr->Next ;
	}
}

void add_at_pos(u16 data_val,u8 pos){
	node *ptr = first;
	node *ptr2 = (node*)malloc(sizeof(node));
	ptr2->data = data_val;
	ptr2->Next =Null;
	
	
	
	pos--;
	while(pos!=1){
		ptr = ptr->Next;
		pos--;	
	}
	ptr2->Next = ptr->Next;
	ptr->Next  = ptr2;
	
}
void add_at_first(u16 data_val,u8 pos){
	node *ptr = (node*)malloc(sizeof(node));
	ptr->data = data_val;
	ptr->Next =first;
	
	first = ptr;
	
}
void add_at_end(u16 data_val,u8 pos)
{
	node *ptr = first;
	node *ptr2 = (node*)malloc(sizeof(node));
	ptr2->data = data_val;
	ptr2->Next =Null;
	while(ptr->Next !=Null){
		ptr = ptr->Next;
	}
	last = ptr2 ;
	ptr->Next = ptr2;
	
	
}

// node *search(u16 value){
	// node *search = first;
	// while(search!=Null){
		// if(search->data == value){
			// return search;
			
		// }else{
			// search= search->Next;
		// }
	// }
	// return Null;	
// }
void deleteNode(node ** head_ref, int key)
{
    // Store head node
    node *temp = *head_ref, *prev;
 
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->Next; // Changed head
        free(temp); // free old head
        return;
    }
 
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->Next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->Next = temp->Next;
 
    free(temp); // Free memory
}
 

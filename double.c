#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insert_front();
void insert_last();
void delete_fron(t;
void delete_last();
void display();
void search();
void main()
{
    int ch=0;
    while(ch!=7)
    {
        printf("choose your option");
        printf("\n1.Insert in begining\n2.Insert at last\n 3.Delete from front\n 4.Delete from last\n 5.Search\n6.Show\n7.Exit\n");
        
    }
}
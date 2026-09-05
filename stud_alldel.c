#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void deletall(SLL **head)
{
        if(*head==0)
        {
                printf("No records are found\n");
                return;
        }

        SLL *del=*head;

        while(del)
        {
                *head=del->next;
                free(del);
                del=*head;
        }

        printf("All records deleted successfully\n");
}

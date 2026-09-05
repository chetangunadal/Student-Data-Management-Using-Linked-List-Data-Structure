#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void rev(SLL **head)
{
        SLL *p=*head,*q=0,*r=0;

        while(p)
        {
                q=p->next;
                p->next=r;
                r=p;
                p=q;
        }

        *head=r;
}

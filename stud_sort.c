#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void sort(SLL **head)
{
        if(*head==0)
        {
                printf("No records are found\n");
                return;
        }

        if((*head)->next==0)
                return;

        char ch;
        SLL *p=*head,*q,t;

        printf("Choose the option\n");
        printf("N/n: Sort with name\n");
        printf("P/p: Sort with percentage\n");

        scanf(" %c",&ch);

        if(ch=='N'||ch=='n')
        {
                for(p=*head;p;p=p->next)
                {
                        for(q=p->next;q;q=q->next)
                        {
                                if(strcmp(p->name,q->name)>0)
                                {
                                        strcpy(t.name,p->name);
                                        t.rollno=p->rollno;
                                        t.percentage=p->percentage;

                                        strcpy(p->name,q->name);
                                        p->rollno=q->rollno;
                                        p->percentage=q->percentage;

                                        strcpy(q->name,t.name);
                                        q->rollno=t.rollno;
                                        q->percentage=t.percentage;
                                }
                        }
                }
        }

        else if(ch=='P'||ch=='p')
        {
                for(p=*head;p;p=p->next)
                {
                        for(q=p->next;q;q=q->next)
                        {
                                if(p->percentage<q->percentage)
                                {
                                        strcpy(t.name,p->name);
                                        t.rollno=p->rollno;
                                        t.percentage=p->percentage;

                                        strcpy(p->name,q->name);
                                        p->rollno=q->rollno;
                                        p->percentage=q->percentage;

                                        strcpy(q->name,t.name);
                                        q->rollno=t.rollno;
                                        q->percentage=t.percentage;
                                }
                        }
                }
        }

        else
        {
                printf("Invalid option\n");
        }
}

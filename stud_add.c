#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void add_new(SLL **h)
{
        if((*h)!=0 && (*h)->rollno!=1)
                sortroll(h);

        int c=1;
        SLL *new=malloc(sizeof(SLL));

        printf("enter the name and percentage\n");
        scanf("%s%f",new->name,&new->percentage);

        while(new->percentage>100 ||new->percentage<0)
        {
                printf("again enter the percentage\n");
                scanf("%f",&new->percentage);
        }

        SLL *p=*h,*q=p;

        if(p!=0)
        {
                while(p)
                {
                        if(c!=p->rollno)
                                break;
                        c++;
                        q=p;
                        p=p->next;
                }
        }

        new->rollno=c;

        if(*h==0)
        {
                new->next=0;
                *h=new;
        }
        else if(*h==p)
        {
                new->next=*h;
                *h=new;
        }
        else
        {
                new->next=p;
                q->next=new;
        }
}

void sortroll(SLL **head)
{
        SLL *p,*q,t;

        for(p=*head;p;p=p->next)
        {
                for(q=p->next;q;q=q->next)
                        if(p->rollno>q->rollni)
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

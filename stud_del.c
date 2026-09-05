#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void delet(SLL **head)
{
        if(*head==0)
        {
                printf("No record are found\n");
                return;
        }

        int num,count=0;

        printf("Choose the option\n");
        printf("R/r: Based on roll number\n");
        printf("N/n: Based on name\n");

        char ch;
        scanf(" %c",&ch);

        SLL *p=*head,*q=p;

        if(ch=='R'||ch=='r')
        {
                printf("Enter the roll number\n");
                scanf("%d",&num);

                while(p)
                {
                        if(p->rollno==num)
                                break;

                        q=p;
                        p=p->next;
                }

                if(p==0)
                {
                        printf("Roll number is not found\n");
                        return;
                }

                if(*head==p)
                {
                        *head=p->next;
                }
                else
                {
                        q->next=p->next;
                }

                free(p);

                printf("Record deleted successfully\n");
        }

        else if(ch=='N'||ch=='n')
        {
                int f=1;
                char s[50];

                printf("Enter the name\n");
                scanf("%s",s);

                p=*head;

                printf("----------------------------------\n");

                while(p)
                {
                        if(strcmp(s,p->name)==0)
                        {
                                printf("%d %s %.2f\n",
                                       p->rollno,
                                       p->name,
                                       p->percentage);
                                count++;
                        }

                        p=p->next;
                }

                printf("----------------------------------\n");

                p=*head;
                q=0;

                if(count==1)
                {
                        while(p)
                        {
                                if(strcmp(s,p->name)==0)
                                {
                                        f=0;

                                        if(*head==p)
                                        {
                                                *head=p->next;
                                        }
                                        else
                                        {
                                                q->next=p->next;
                                        }

                                        free(p);

                                        printf("Record deleted successfully\n");
                                        break;
                                }

                                q=p;
                                p=p->next;
                        }
                }

                else if(count>1)
                {
                        printf("Enter the roll number\n");
                        scanf("%d",&num);

                        while(p)
                        {
                                if(p->rollno==num &&
                                   strcmp(s,p->name)==0)
                                {
                                        if(*head==p)
                                        {
                                                *head=p->next;
                                        }
                                        else
                                        {
                                                q->next=p->next;
                                        }

                                        free(p);
                                        f=0;

                                        printf("Record deleted successfully\n");
                                        break;
                                }

                                q=p;
                                p=p->next;
                        }
                }

                if(f && count==0)
                {
                        printf("This student name is not present\n");
                }
                else if(f && count>1)
                {
                        printf("This roll number is not present for this name\n");
                }
        }

        else
        {
                printf("Invalid option\n");
        }
}

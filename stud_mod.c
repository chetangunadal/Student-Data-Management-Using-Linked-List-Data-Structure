#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void modify(SLL **head)
{
        if(*head==0)
        {
                printf("No records are found\n");
                return;
        }

        char ch;

        printf("Choose the option\n");
        printf("R/r: Search for the roll number\n");
        printf("N/n: Search by name\n");
        printf("P/p: Search by percentage\n");

        scanf(" %c",&ch);

        SLL *p=*head,*q=p;

        if(ch=='R'||ch=='r')
        {
                int num;

                printf("Enter the roll number\n");
                scanf("%d",&num);

                while(p)
                {
                        q=p;

                        if(p->rollno==num)
                                break;

                        p=p->next;
                }

                if(p==0)
                {
                        printf("This roll number is not found\n");
                        return;
                }

                printf("Displaying the %d roll number details\n",num);
                printf("---------------------------------\n");
                printf("%d %s %.2f\n",
                       p->rollno,
                       p->name,
                       p->percentage);
                printf("---------------------------------\n");

                printf("%d roll number student modify the name and percentage\n",num);

                printf("Enter the name\n");
                scanf(" %s",q->name);

                printf("Enter the percentage\n");
                scanf("%f",&q->percentage);

                while(q->percentage>100 || q->percentage<0)
                {
                        printf("Again enter valid percentage\n");
                        scanf("%f",&q->percentage);
                }
        }

        else if(ch=='N'||ch=='n')
        {
                int num,f=1;
                int count=0;
                char s[40];

                printf("Enter the student name\n");
                scanf(" %s",s);

                printf("---------------------------------\n");

                while(p)
                {
                        if(strcmp(s,p->name)==0)
                        {
                                count++;

                                printf("%d %s %.2f\n",
                                       p->rollno,
                                       p->name,
                                       p->percentage);

                                q=p;
                        }

                        p=p->next;
                }

                printf("---------------------------------\n");

                if(count==0)
                {
                        printf("Student name not found\n");
                        return;
                }

                if(count==1)
                {
                        p=q;

                        printf("Enter the new name\n");
                        scanf(" %s",p->name);

                        printf("Enter the percentage\n");
                        scanf("%f",&p->percentage);

                        while(p->percentage>100 || p->percentage<0)
                        {
                                printf("Again enter valid percentage\n");
                                scanf("%f",&p->percentage);
                        }
                }
                else
                {
                        p=*head;

                        printf("Enter only duplicate name roll number for modification\n");
                        scanf("%d",&num);

                        while(p)
                        {
                                if(num==p->rollno && strcmp(s,p->name)==0)
                                {
                                        printf("Enter the %d roll number new name\n",num);
                                        scanf(" %s",p->name);

                                        printf("Enter the percentage\n");
                                        scanf("%f",&p->percentage);

                                        while(p->percentage>100 || p->percentage<0)
                                        {
                                                printf("Again enter valid percentage\n");
                                                scanf("%f",&p->percentage);
                                        }

                                        f=0;
                                        break;
                                }

                                p=p->next;
                        }

                        if(f)
                                printf("Roll number is not present for this name\n");
                }
        }

        else if(ch=='p'||ch=='P')
        {
                float num;
                int count=0;

                printf("Enter the percentage\n");
                scanf("%f",&num);

                printf("---------------------------------\n");

                while(p)
                {
                        if(num==p->percentage)
                        {
                                printf("%d %s %.2f\n",
                                       p->rollno,
                                       p->name,
                                       p->percentage);

                                count++;
                                q=p;
                        }

                        p=p->next;
                }

                printf("---------------------------------\n");

                int num1;

                if(count==0)
                {
                        printf("No one got the given percentage\n");
                        return;
                }

                if(count==1)
                {
                        p=q;

                        printf("Enter the new name\n");
                        scanf(" %s",p->name);

                        printf("Enter the percentage\n");
                        scanf("%f",&p->percentage);

                        while(p->percentage>100 || p->percentage<0)
                        {
                                printf("Again enter valid percentage\n");
                                scanf("%f",&p->percentage);
                        }
                }
                else
                {
                        p=*head;

                        printf("Enter only roll number for modification who got the same percentage\n");
                        scanf("%d",&num1);

                        while(p)
                        {
                                q=p;

                                if(num1==p->rollno && num==p->percentage)
                                {
                                        printf("Enter the %d roll number new percentage\n",num1);
                                        scanf("%f",&q->percentage);

                                        while(q->percentage>100 || q->percentage<0)
                                        {
                                                printf("Again enter valid percentage\n");
                                                scanf("%f",&q->percentage);
                                        }

                                        break;
                                }

                                p=p->next;
                        }
                }
        }

        else
        {
                printf("Invalid option\n");
        }
}

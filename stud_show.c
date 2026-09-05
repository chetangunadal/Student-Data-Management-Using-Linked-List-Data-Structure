#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void print(SLL *p)
{
        if(p==0)
        {
                printf("No record found\n");
                return;
        }

        printf("---------------------------------\n");

        while(p)
        {
                printf("%d %s %.2f\n",
                       p->rollno,
                       p->name,
                       p->percentage);

                p=p->next;
        }

        printf("---------------------------------\n");
}

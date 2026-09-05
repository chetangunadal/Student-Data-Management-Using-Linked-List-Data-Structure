#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void scanfile(SLL **p)
{
        FILE *fp=fopen("data","r");

        if(fp==0)
        {
                printf("File is not open\n");
                return;
        }

        while(1)
        {
                SLL *new=malloc(sizeof(SLL)),*t;

                if(fscanf(fp,"%d%s%f",
                          &new->rollno,
                          new->name,
                          &new->percentage)==-1)
                {
                        free(new);
                        break;
                }

                new->next=0;

                if(*p==0)
                {
                        *p=new;
                }
                else
                {
                        t=*p;

                        while(t->next)
                                t=t->next;

                        t->next=new;
                }
        }

        fclose(fp);
}

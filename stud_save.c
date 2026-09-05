#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student_header.h"

void savefile(SLL *t)
{
        if(t==0)
        {
                printf("No records found\n");
                return;
        }

        FILE *fp=fopen("data","w");

        if(fp==0)
        {
                printf("File is not opened successfully\n");
                return;
        }

        while(t)
        {
                fprintf(fp,"%d %s %.2f\n",
                        t->rollno,
                        t->name,
                        t->percentage);

                t=t->next;
        }

        fclose(fp);
}

 #include<stdio.h>
 #include<stdlib.h>
 #include"student_header.h"
 int main()
 {
         char ch;
         SLL *head=0;
         scanfile(&head);
         while(1)
         {
                 printf("Enter the option\n");
                 printf("a/A : Add new record \ns/S : Show the list \nd/D : Delete a record \nv/V : Save records \nm/M : Modify a record \nt/T : Sort the list \nl/L : Delete all the records\nr/R : Reverse the list\ne/E : Exit\n");
                 scanf(" %c",&ch);
                 switch(ch)
                 {
                         case 'a':
                         case 'A':add_new(&head);
                                  break;
                         case 's':
                         case 'S':print(head);
                                  break;
                         case 'd':
                         case 'D':delet(&head);
                                  break;
                         case 'v':
                         case 'V':savefile(head);
                                  break;
                                  //case 5:scanfile(&head);break;
                         case 'm':
                         case 'M':modify( &head);
                                  break;
                         case 't':
                         case 'T':sort(&head);
                                  break;
                         case 'l':
                         case 'L':deletall(&head);
                                  break;
                         case 'r':
                         case 'R':rev(&head);
                                  break;
                         case 'e':
                         case 'E':goto end;
                                  break;
                         default:printf("invalid option\n");
                 }
         }
 end:
         while(1)
         {
                 printf("do want save this lis type:s/S\ndon't want save this lis type:n/N ");
                 scanf(" %c",&ch);
                 if(ch=='s'||ch=='S')
                 {
                         savefile(head);
                         exit(0);
                 }
                 else if(ch=='n'||ch=='N')
                         exit(0);
                 else
                         printf("please enter valid option\n");
         }
         return 0;
 
 }
                                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                   

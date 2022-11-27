
#include<stdio.h>
 #include<string.h>
 #include<Stdlib.h>

 struct Student
 {   int roll;
     char name[20];
     struct student *next;
 };

 void DeleteFirst (struct Student **h)
{
    struct Student *tmp;
        if(*h==NULL)
    {
        printf("Empty ll");
    }
    else
    {
    tmp=*h;
    *h=tmp->next;
    free(tmp);
    }
}


void displaylinkedlist(struct Student *h)
{
         if(h==NULL)
            printf("ll is empty");
         else
    {
            struct Student *tmp=h;

         while(tmp!=NULL)
         {
             printf("%d %s\n",tmp->roll,tmp->name);
                tmp=tmp->next;
         }

     }


}


int main()
{
    struct Student a,b,c,d, *head;
        head=&a;

    strcpy(a.name,"Fahmi");
        a.roll=101;
        a.next=&b;

    strcpy(b.name,"dada");
        b.roll=202;
        b.next=&c;

    strcpy(c.name,"Nowrin");
        c.roll=303;
        c.next=&d;

    strcpy(d.name,"rajon");
        d.roll=10;
        d.next=NULL;

    DeleteFirst(&head);

      displaylinkedlist(head);

    return 0;
}

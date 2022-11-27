
#include<stdio.h>
 #include<string.h>
 #include<Stdlib.h>

 struct Student
 {   int roll;
     char name[20];
     struct student *next;
 };

void DeleteNNode(struct Student **h, int N)
{
    int i;
    struct Student *tmp = *h, *tmp2;
    if(*h==NULL)
        printf("Empty");
    else if (N==1)
    {
        *h=(*h)->next;
            free (*h);
    }
    else
    {
        for(i=1; i<N-2; i++)
                tmp=tmp->next;
        tmp2=tmp->next;
        tmp->next=tmp2->next;
        free (tmp2);
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


     DeleteNNode(&head,3);

      displaylinkedlist(head);


    return 0;
}

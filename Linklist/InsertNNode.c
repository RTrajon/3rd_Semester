#include<stdio.h>
#include<string.h>
#include<Stdlib.h>

 struct Student
 {   int roll;
     char name[20];
     struct student *next;
 };

void InsertNNode(struct Student **h,char name[20],int roll, int N)
{
    int i;
    struct Student *newN, *tmp=*h;
    newN = (struct Student*)malloc(sizeof(struct Student));
    strcpy(newN->name,name);
        newN->roll=roll;
    if(*h==NULL)
    {
        newN->next=NULL;
            *h=newN;
    }

    else if(N==1)
    {
        newN->next=*h;
            *h=newN;
    }
    else
    {
        for(i=1; i<N-2; i++)
            tmp=tmp->next;
        newN->next=tmp->next;
            tmp->next=newN;
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



        InsertNNode(&head,"Nowrin",303,3);
      displaylinkedlist(head);


    return 0;
}


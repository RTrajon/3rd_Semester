 #include<stdio.h>
 #include<string.h>
 #include<Stdlib.h>

 struct Student
 {   int roll;
     char name[20];
     struct student *next;
 };

void insertBegin(struct Student **hptr,char name[],int roll)
{
    struct Student *tmp;
    tmp=(struct Student*) malloc (sizeof(struct Student));
        strcpy(tmp->name,name);
            tmp->roll=roll;
            tmp->next=*hptr;
                *hptr=tmp;
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

int Sizelinkedlist(struct Student *h)
{
    int cout=0;
    if (h==NULL)
        return 0;
    else
    {
        struct Student *tmp=h;
        while (tmp!=NULL)
        {
            cout++;
            tmp=tmp->next;
        }
        return cout;
    }
}


int rollFind(struct Student *h, char name[20])
{
    struct Student *tmp=h;
    while(tmp!=NULL)
    {
        if(strcmp(tmp->name,name)==0)
            return tmp->roll;
        else
            tmp=tmp->next;
    }
    return -1;
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

    strcpy(c.name,"A");
        c.roll=303;
        c.next=&d;

    strcpy(d.name,"rajon");
        d.roll=10;
        d.next=NULL;


    insertBegin(&head,"shafat",525);

    displaylinkedlist(head);

    int size;
    size=Sizelinkedlist(head);
    printf("%d",size);

    int search=rollFind(head,"di");
    if(search==-1)
        printf("roll not found");
    else
        printf("\n %d",search);



    return 0;
}





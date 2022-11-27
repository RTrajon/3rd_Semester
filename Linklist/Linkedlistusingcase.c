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


int main()
{
    struct Student a,b,c,d, *head;
        head=&a;

    strcpy(a.name,"Fahmi");
        a.roll=101;
        a.next=&b;

    strcpy(b.name,"Maria");
        b.roll=202;
        b.next=&c;

    strcpy(c.name,"A");
        c.roll=303;
        c.next=&d;

    strcpy(d.name,"Rajon");
        d.roll=10;
        d.next=NULL;


    int choice, size, search;
    while(1)
    {
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            printf("Inserted a node at first:");
            insertBegin(&head,"shafat",525);
            displaylinkedlist(head);
            break;
        case 2:
            printf("\nInserted a node at Anywhere:");
            InsertNNode(&head,"Nowrin",303,4);
            displaylinkedlist(head);
            break;
        case 3:
            printf("\nDeleting a node at First:");
            DeleteFirst(&head);
            displaylinkedlist(head);
            break;
        case 4:
            printf("\nDeleting a node at Anywhere:");
            DeleteNNode(&head,3);
            displaylinkedlist(head);
            break;
        case 5:
            printf("\nName:");
            displaylinkedlist(head);
            break;
        case 6:
            size=Sizelinkedlist(head);
            printf("Size is : %d\n",size);
            break;
        case 7:
            search=rollFind(head,"di");
            if(search==-1)
                printf("roll not found\n");
            else
                printf("\n %d",search);
            break;
        case 8:
            exit(0);


         default:
            printf("invalid input");
        }
    }

}




#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>

class menu
{
    private:
        void edit_records(void);
        void report(void);
        void roomf(void);
        void customerf(void);

    public:
        void overview(void);
        void main_menu(void);
        void enter_password(void);

};

class room
{
    private:
        int recording(int);
        void display_record(int);
        int roomno;
        char roomcode[5], status;
        float tariff;

    public:
        void add(void);
        void modify(void);
        void deletion(void);
        void display_room_record(int);
        void display_list(void);
        int room_found(int);
        void change_status(int,char);
        char room_status(int);
        float get_data(int);

};

class customer
{
    private:
        int recording(int);
        void display_record(int);
        int roomno;
        char name[21], phone[8];
        float advance, misc, room_srv;

    public:
        void add(void);
        void modify(void);
        void deletion(void);
        void display_list(void);
        void display_customer_record(int);
};

void menu::main_menu(void)
{
    int I;
    char ch;
    clrscr();
    gotoxy(3,2);
    cout<<"Twin Hotel";
    gotoxy(3,3);
    cout<<"_________________";
    gotoxy(9,4);
    cout<<"Karachi";
    gotoxy(55,2);
    cout<<"Shahed e MIllat Road";
    gotoxy(55,3);
    cout<<"Mear Tariq Road";
    gotoxy(55,4);
    cout<<"Karachi 0010, Pakistan";
    gotoxy(55,5);
    cout<<"T:(+9211) 0000 0000";
    gotoxy(55,2);
    cout<<"Shaheed-e-Millat Raid";
    gotoxy(30,11);
    cout<<"1. EDIT RECORDS";
    gotoxy(30,13);
    cout<<"2. DISPLAY ROOM RECORDS";
    gotoxy(30,15);
    cout<<"3. DISPLAY CUSTOMER RECORDS";
    gotoxy(30,17);
    cout<<"4. EXIT TOOOOOS";
    gotoxy(30,23);
    cout<<"Enter your choice: ";
    cin>>ch;

        if( ch == '3')
        {
            char ans;
                do
                {
                    clrscr();
                    cout<<"enter the room of customer to be displayed";

                    cin>>1;
                    customer c;
                    c.display_customer_record(1);
                    cout<<"\ndo you wish to see more records(Y OR M)";
                    cin>>ans;
                }
                while(ans == 'Y');
                main_menu();
        }

        else if(ch == '2')
        {
            char ans1;
                do
                {
                    clrscr();
                    int m;
                    cout<<"enter room to be displayd";
                    cin>>m;
                    room r;
                    r.display_room_record(m);
                    cout<<"\ndo u wish to see more records";
                    cin>>ans1;
                }
                while(ans1 == 'Y');
                main_menu();
        }

        else if( ch == '1')
            edit_records();
        if( ch == '4')
        {
            clrscr();
            gotoxy(26,10);
            cout<<"THANKYOU FOR USING OUR PROJCT";
            getch();
            exit(0);
        }
}

void main :: edit_records(void)
{
    int ch;
    while(ch!=3)
    {
        clsscr();
        gotoxy(34,4);
        cout<<"     EDIT";
        gotoxy(30,8);
        cout<<"1.ROOM RECORDS";

    }
}

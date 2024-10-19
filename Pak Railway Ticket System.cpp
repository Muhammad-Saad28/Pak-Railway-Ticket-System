#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

//Built-in-Functions
string setcolor(unsigned short color);
void gotoxy(int x, int y);

//application
void header();
int account();

//Admin
int admin();
void adminpanel(int choice);

//User
int user();
void userpanel(int choice);


//Strings
string stations[15] = {"Lahore","Karachi"};
string trains[15] = {"LHR123","Kar123"};
string traintimes[15] = {"12:00 AM","9:10 AM"};

main()
{
    int panelNo;
    header();
    panelNo = account();

}

void header()
{
    system("cls");
    setcolor(11);
    cout<<"     _____          _        _____          _  _                               "<<endl;             
    cout<<"    |  _ _\\        | |      |  __ \\        (_)| |                              "<<endl;
    cout<<"    | |__) |  __ _ | | __   | |__) |  __ _  _ | |__      __  __ _  _   _       "<<endl;
    cout<<"    |  ___/  / _` || |/ /   |  _  /  / _` || || |\\ \\ /\\ / / / _` || | | |      "<<endl;
    cout<<"    | |     | (_| ||   <    | |  \\ \\| (_| || || | \\ V  V / | (_| || |_| |     "<<endl;
    cout<<"    |_|      \\__,_||_|\\_\\   |_|   \\_\\\\__,_||_||_|  \\_/\\_/   \\__,_| \\__, |      "<<endl;
    cout<<"                                                                    __/ /     "<<endl;
    cout<<"                                                                   |___/          "<<endl;
    setcolor(12);
    cout<<" _______  _        _            _      _____              _                     "<<endl;
    cout<<"|__   __|(_)      | |          | |    / ____|            | |                   "<<endl;
    cout<<"   | |    _   ___ | | __   ___ | |_  | (___   _   _  ___ | |_   ___  _ __ ___  "<<endl;
    cout<<"   | |   | | / __|| |/ /  / _ \\| __|  \\___ \\ | | | |/ __|| __| / _ \\| '_ ` _ \\ "<<endl;
    cout<<"   | |   | || (__ |   <  |  __/| |_   ____) || |_| |\\__ \\| |_ |  __/| | | | | |"<<endl;
    cout<<"   |_|   |_| \\___||_|\\_\\  \\___| \\__| |_____/  \\__, ||___/ \\__| \\___||_| |_| |_|"<<endl;
    cout<<"                                              __/ /                           "<<endl;
    cout<<"                                             |___/                            "<<endl;

}

int account()
{
    int choice;
    int adminchoice;
    int userchoice;
    string username = "admin";
    string password = "admin";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    setcolor(07);
    cout<<"1) Create Account "<<endl;
    cout<<endl;
    cout<<"2) Log in "<<endl;
    cout<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;
    if(choice == 1)
    {
        system("cls");
        header();
        setcolor(07);
        cout<<"Enter Username: ";
        cin>>username;
        cout<<endl;
        cout<<"Enter Password: ";
        cin>>password;
        if(username == "admin" && password == "admin")
        {
            adminchoice = admin();
            adminpanel(adminchoice);
        }
    }
    else if(choice == 2)
    {
        system("cls");
        header();
        setcolor(07);
        cout<<"Select Username: ";
        cin>>username;
        cout<<endl;
        cout<<"Select Password: ";
        cin>>password;
        if(username != "admin" || password != "admin")
        {
            userchoice  = user();
            userpanel(userchoice);
        }  
    }
    else 
    {
        setcolor(12);
        cout<<endl;
        cout<<"Invalid Choice"<<endl;
        getch();
        system("cls");
        header();
        account();
    }  
}

int admin()
{
    int choice;
    system("cls");
    header();
    setcolor(02);
    cout<<"Admin Panel"<<endl;
    setcolor(07);
    cout<<endl;
    cout<<endl;
    cout<<"1) Add Station..."<<endl;
    cout<<"2) Delete Station..."<<endl;
    cout<<"3) Update Station..."<<endl;
    cout<<"4) View Station..."<<endl;
    cout<<endl;
    cout<<"5) Add Train..."<<endl;
    cout<<"6) Delete Train... "<<endl;
    cout<<"7) Update Train Time... "<<endl;
    cout<<"8) View All Trains..."<<endl;
    cout<<"9) View All Train Times"<<endl;
    cout<<endl;
    cout<<"10) Log out..."<<endl;
    cout<<endl;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    return choice;
}

void adminpanel(int choice)
{
    if(choice == 1)
    {
        system("cls");
        header();
        setcolor(02);
        int numberOfStations;
        cout<<"Admin Panel > Add Stations"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
        cout<<endl;
        cout<<"Enter the number of station you want to Add: ";
        cin>>numberOfStations;
        cout<<endl;
        cout<<"Enter Station name: ";
        cin>>stations[numberOfStations-1];
        cout<<endl;
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
    }
    if(choice == 2)
    {
        system("cls");
        header();
        setcolor(02);
        int numberOfStations;
        cout<<"Admin Panel > Delete Stations"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
        cout<<endl;
        cout<<"Enter the number of station you want to Delete: ";
        cin>>numberOfStations;
        cout<<endl;
        stations[numberOfStations-1] = "";
        cout<<endl;
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
    }
    if(choice == 3)
    {
        system("cls");
        header();
        setcolor(02);
        int numberOfStations;
        cout<<"Admin Panel > Update Stations"<<endl;
        cout<<endl;
        setcolor(07);
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
        cout<<endl;
        cout<<"Enter the number of station you want to Update: ";
        cin>>numberOfStations;
        cout<<endl;
        cout<<"Enter Station name: ";
        cin>>stations[numberOfStations-1];
        cout<<endl;
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
    }
    if(choice == 4)
    {
        system("cls");
        header();
        setcolor(02);
        cout<<"Admin Panel > View Stations"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
    }
    if(choice == 5)
    {
        system("cls");
        header();
        setcolor(02);
        int numberOfTrain;
        cout<<"Admin Panel > Add Trains"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Trains "<<i+1<<": "<<trains[i]<<endl;
        }
        cout<<"Enter the number of train you want to Add: ";
        cin>>numberOfTrain;
        cout<<"Enter Station Name: ";
        cin>>trains[numberOfTrain-1];
        for(int i = 0; i<15; i++)
        {
            cout<<"Train "<<i+1<<": "<<trains[i]<<endl;
        }
    }
    if(choice == 6)
    {
        system("cls");
        header();
        setcolor(02);
        int numberOfTrain;
        cout<<"Admin Panel > Delete Trains"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Trains "<<i+1<<": "<<trains[i]<<endl;
        }
        cout<<endl;
        cout<<"Enter the number of train you want to Delete: ";
        cin>>numberOfTrain;
        trains[numberOfTrain-1] = " ";
        cout<<endl;
        for(int i = 0; i<15; i++)
        {
            cout<<"Train "<<i+1<<": "<<trains[i]<<endl;
        }
    }
    if(choice == 7)
    {
        system("cls");
        header();
        setcolor(02);
        int train;
        cout<<"Admin Panel > Update Train Time"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Train " <<i+1 <<": "<< trains[i] <<"\t|\tTrain Time "<<i+1<<": "<<traintimes[i]<<endl;
        }
        cout<<endl;
        cout<<"Enter the Train you want to Update the time of: ";
        cin>>train;
        train-=1;
        cout<<endl;
        for(int i = 0; i<15; i++)
        {
            if(i == train)
            {
                cout<<"Enter Train time: ";
                cin>>traintimes[i];
            }
        }
        cout<<endl;
        for(int i = 0; i<15; i++)
        {
            cout<<"Train " <<i+1 <<": "<< trains[i] <<"\t|\tTrain Time "<<i+1<<": "<<traintimes[i]<<endl;
        }
    }
    if(choice == 8)
    {
        system("cls");
        header();
        setcolor(02);
        cout<<"Admin Panel > View All Trains"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Train "<<i+1<<": "<<trains[i]<<endl;
        }
  
    }
    if(choice == 9)
    {
        system("cls");
        header();
        setcolor(02);
        cout<<"Admin Panel > View All Trains Times"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Train Times "<<i+1<<": "<<traintimes[i]<<endl;
        }
    }
    if(choice == 10)
    { 
        system("cls");  
        header();
        setcolor(07);
        account();
    }
}

int user()
{
    int choice;
    system("cls");
    header();
    setcolor(02);
    cout<<"User Panel Panel"<<endl;
    cout<<endl;
    setcolor(07);
    cout<<endl;
    cout<<endl;
    cout<<"1) View Station..."<<endl;
    cout<<"2) View All Trains..."<<endl;
    cout<<"3) View All Train Times"<<endl;
    cout<<endl;
    cout<<"4) Book Ticket..."<<endl;
    cout<<endl;
    cout<<"5) Log out..."<<endl;
    cout<<endl;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    return choice;   
}

void userpanel(int choice)
{
    if(choice == 1)
    {
        system("cls");
        header();
        setcolor(02);
        cout<<"User Panel > View Stations"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Station "<<i+1<<": "<<stations[i]<<endl;
        }
    }
    if(choice == 2)
    { 
        system("cls");
        header();
        setcolor(02);
        cout<<"User Panel > View All Trains"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Train "<<i+1<<": "<<trains[i]<<endl;
        }
    }
    if(choice == 3)
    {
        system("cls");
        header();
        setcolor(02);
        cout<<"User Panel > View All Trains Times"<<endl;
        cout<<endl;
        setcolor(07);
        for(int i = 0; i<15; i++)
        {
            cout<<"Train Times "<<i+1<<": "<<trains[i]<<endl;
        }
    }
    if(choice == 4)
    {
        system("cls");
        header();
        setcolor(02);
        cout<<"User Panel > Book a Ticket"<<endl;
        cout<<endl;
        setcolor(07);
        string stationFrom, stationTo, train;
        int price, tickets;
        cout<<"Enter the station you are from: ";
        cin>>stationFrom;
        cout<<"Enter the station you are to: ";
        cin>>stationTo;
        cout<<"Enter the train number: ";
        cin>>train;
        cout<<"Enter number of tickets: ";
        cin>>tickets;
        if(stations[0] == stationFrom && trains[0] == train)
            price = 2000*tickets;
        else if(stations[0] == stationFrom && trains[1] == train)
            price  = 1500*tickets;
        else if(stations[1] == stationFrom && trains[0] == train)
            price = 2500*tickets;
        else if(stations[1] == stationFrom && trains[1] == train)
            price = 1000*tickets;
        else 
            cout<<"Invalid Train Number or Station"<<endl;
        cout<<"Price of the ticket: "<<price<<endl;
    }
    if(choice == 5)
    {
        system("cls");  
        header();
        setcolor(07);
        account();
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

string setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}
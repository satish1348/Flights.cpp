#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();

class Management
{
      public:
             Management()
             {
                         mainMenu();
             }
};

class Details
{
      public:
             static string name,gender;
             int phoneNo;
             int age;
             string add;
             static int cId;
             char arr[100];
             
             void information
             {
                  cout<<"\nEnter the customer ID:";
                  cin>>cId;
                  cout<<"\nEnter the name:";
                  cin>>name;
                  cout<<"Enter the age:";
                  cin>>age;
                  cout<<"\n Address  :";
                  cin>>add;
                  cout<<"\n Gender :";
                  cin>>gender;
                  cout<<"Your details are saved with us\n"endl;
             }
};


int Details::cId;
string Details::name;
string Details::gender;

class registration
{
      public:
             static int choice;
             int choice1;
             int back;
             static float charges;
             
             
             void flights()
             {
                  string flightsN[]={"Dubai","Canada","UK","USA","Australia","Europe","India"};
                  for(int a=0;a<7;a++)
                  {
                         cout<<(a+1)<<" .flight to "<<flightN[a]<<endl;
                          
                  }
                  cout<<"\nWelcome to the SATISH AIRLINES!"endl;
                  cout<<"Press the number of the country of which you want to book the flight:";
                  cin>>choice;
                  
                  switch(choice)
                  {
                                case 1:
                                     {
                                          cout<<"_______________WELCOME TO DUBAI EMIRATES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. DUB -498"<<endl;
                                          cout<<"\t 08-01-2022  8:00Am 10hrs  Rs.75000"<<endl;
                                          cout<<"1. DUB -658"<<endl;
                                          cout<<"\t 09-01-2022  4:00Am 12hrs  Rs.72000"<<endl;
                                          cout<<"1. DUB -526"<<endl;
                                          cout<<"\t 08-01-2022  11:00Am 11hrs  Rs.74000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=75000;
                                                        cout<<"\nYou have successfully booked the flight DUB -498"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=72000;
                                                        cout<<"\nYou have successfully booked the flight DUB -658"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=74000;
                                                        cout<<"\nYou have successfully booked the flight DUB -526"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                case 2:
                                     {
                                          cout<<"_______________WELCOME TO CANADIAN AIRLINES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. CAN -198"<<endl;
                                          cout<<"\t 08-01-2022  2:00Pm 19hrs  Rs.91000"<<endl;
                                          cout<<"1. CAN -258"<<endl;
                                          cout<<"\t 10-01-2022  4:00Am 22hrs  Rs.89000"<<endl;
                                          cout<<"1. CAN -526"<<endl;
                                          cout<<"\t 12-01-2022  01:00Am 18hrs  Rs.94000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=91000;
                                                        cout<<"\nYou have successfully booked the flight CAN -198"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=89000;
                                                        cout<<"\nYou have successfully booked the flight CAN -258"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=94000;
                                                        cout<<"\nYou have successfully booked the flight CAN -526"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                case 3:
                                     {
                                          cout<<"_______________WELCOME TO UK AIRLINES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. UK -498"<<endl;
                                          cout<<"\t 10-01-2022  8:00Am 27hrs  Rs.125000"<<endl;
                                          cout<<"1. UK -458"<<endl;
                                          cout<<"\t 09-01-2022  4:00Am 25hrs  Rs.120000"<<endl;
                                          cout<<"1. UK -226"<<endl;
                                          cout<<"\t 12-01-2022  09:00Am 24hrs  Rs.114000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=125000;
                                                        cout<<"\nYou have successfully booked the flight UK -498"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=120000;
                                                        cout<<"\nYou have successfully booked the flight UK -458"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=114000;
                                                        cout<<"\nYou have successfully booked the flight UK -226"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                case 4:
                                     {
                                          cout<<"_______________WELCOME TO USA AIRLINES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. USA -98"<<endl;
                                          cout<<"\t 10-02-2022  8:00Pm 20hrs  Rs.115000"<<endl;
                                          cout<<"1. USA -65"<<endl;
                                          cout<<"\t 09-02-2022  4:00Am 20hrs  Rs.118000"<<endl;
                                          cout<<"1. USA -22"<<endl;
                                          cout<<"\t 08-02-2022  10:00Am 24hrs  Rs.130000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=115000;
                                                        cout<<"\nYou have successfully booked the flight USA -98"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=118000;
                                                        cout<<"\nYou have successfully booked the flight USA -65"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=130000;
                                                        cout<<"\nYou have successfully booked the flight USA -22"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                case 5:
                                     {
                                          cout<<"_______________WELCOME TO AUSTRALIA AIRLINES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. AUS -398"<<endl;
                                          cout<<"\t 08-01-2022  8:00Am 19hrs  Rs.93000"<<endl;
                                          cout<<"1. AUS -605"<<endl;
                                          cout<<"\t 19-01-2022  4:00Pm 18hrs  Rs.90000"<<endl;
                                          cout<<"1. AUS -503"<<endl;
                                          cout<<"\t 18-02-2022  11:00Pm 16hrs  Rs.86000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=93000;
                                                        cout<<"\nYou have successfully booked the flight AUS -398"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=90000;
                                                        cout<<"\nYou have successfully booked the flight AUS -605"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=86000;
                                                        cout<<"\nYou have successfully booked the flight AUS -503"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                case 6:
                                     {
                                          cout<<"_______________WELCOME TO EUROPE AIRLINES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. EU -198"<<endl;
                                          cout<<"\t 22-01-2022  6:00Pm 10hrs  Rs.75000"<<endl;
                                          cout<<"1. EU -658"<<endl;
                                          cout<<"\t 29-01-2022  4:00Am 12hrs  Rs.72000"<<endl;
                                          cout<<"1. EU -526"<<endl;
                                          cout<<"\t 08-01-2022  11:00Am 11hrs  Rs.74000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=75000;
                                                        cout<<"\nYou have successfully booked the flight EU -198"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=72000;
                                                        cout<<"\nYou have successfully booked the flight EU -658"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=74000;
                                                        cout<<"\nYou have successfully booked the flight EU -526"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                case 7:
                                     {
                                          cout<<"_______________WELCOME TO INDIAN AIRLINES_____________________\n"<<endl;
                                          cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                                          cout<<"Following are the flights \n"endl;
                                          cout<<"1. IND -892"<<endl;
                                          cout<<"\t 08-01-2022  8:00Am 10hrs  Rs.65000"<<endl;
                                          cout<<"1. IND -858"<<endl;
                                          cout<<"\t 09-01-2022  4:00Am 12hrs  Rs.62000"<<endl;
                                          cout<<"1. IND -730"<<endl;
                                          cout<<"\t 08-01-2022  11:00Am 11hrs  Rs.64000"<<endl;
                                          cout<<"\nSelect the flight you want to book:";
                                          cin>>choice1;
                                          
                                          if(choice1==1)
                                          {
                                                        charges=65000;
                                                        cout<<"\nYou have successfully booked the flight IND -892"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==2)
                                          {
                                                        charges=62000;
                                                        cout<<"\nYou have successfully booked the flight IND -858"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else if(choice1==3)
                                          {
                                                        charges=64000;
                                                        cout<<"\nYou have successfully booked the flight IND -730"<<endl;
                                                        cout<<"You can go back to menu and take the ticket"<<endl;
                                                        
                                          }
                                          else
                                          {
                                              cout<<"Invalid input , shifting to the pervious menu"<<endl;
                                              flights();
                                          }
                                          cout<<"Press any key to go back to the main menu:"<<endl;
                                          cin>>back;
                                          if(back==1)
                                          {
                                                     mainMenu();
                                          }
                                          else
                                          {
                                              mainMenu();
                                          }
                                          
                                     }
                                     default:
                                     {
                                             cout<<"Invalid input, Shifting you to the main menu !"<<endl;
                                             mainMenu();
                                             break;
                                     }
                  }
             }
};

float registration::charges;
int registration::choice;


class ticket : public registration,Details
{
      public:
             void Bill()
             {
                  string destination="";
                  ofstream outf("records.txt");
                  {
                           outf<<"_______________________SATISH AIRLINES_______________"<<endl;
                           outf<<"_______________________TICKET________________________"<<endl;
                           outf<<"_____________________________________________________"<<endl;
                           outf<<"Customer ID:"<<Details::cId<<endl;
                           outf<<"Customer NAME:"<<Details::name<<endl;
                           outf<<"Customer GENDER:"<<Details::gender<<endl;
                           outf<<"\tDescription"<<endl<<endl;
                           
                           if(registration::choice==1)
                           {
                                destination="Dubail";
                           }
                           else if(registration::choice==2)
                           {
                                destination="Canada";
                           }
                          else if(registration::choice==3)
                           {
                                destination="UK";
                           }
                           else if(registration::choice==4)
                           {
                                destination="USA";
                           }
                           else if(registration::choice==5)
                           {
                                destination="Australia";
                           }
                           else if(registration::choice==6)
                           {
                                destination="Europe";
                           }
                           else if(registration::choice==7)
                           {
                                destination="India";
                           } 
                           outf<<"Destination\t\t"<<destination<<endl;
                           outf<<"Flight cost:\t\t"<<registration::charges<<endl;
                                                                            
                  }
                  outf.close();
             }
             void dispBill()
             {
                  ifstream ifs("records.txt");
                  {
                           if(!ifs)
                           {
                                   cout<<"File error!"<<endl;
                           }
                           while(!ifs.eof())
                           {
                                            ifs.getline(arr,100);
                                            cout<<arr<<endl;
                           }
                  }
                  ifs.close();
             }         
};

void mainMenu()
{
     int lchoice;
     int schoice;
     int back;
     
     cout<<"\t                SATISH AIRLINES \n"<<endl;
     cout<<"\t________________Main  Menu___________________"<<endl;
     cout<<"\t______________________________________________"<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t\t|"<<endl;
     
     cout<<"\t|\t Press 1 to add the Customer Details   \t|"<<endl;
     cout<<"\t|\t Press 2 for Flight Registration       \t|"<<endl;
     cout<<"\t|\t Press 3 for Ticket and Charges        \t|"<<endl;
     cout<<"\t|\t Press 4 to Exit                       \t|"<<endl;
     cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
     cout<<"\t______________________________________________"<<endl;
     
     
     cout<<"Enter the choice: ";
     cin>>lchoice;
     
     
     Details d;
     registration r;
     ticket t;
     
     
     
     
     switch(choice)
     {
                   case 1:
                        {
                              cout<<"___________Customers___________\n"<<endl;
                              d.information();
                              cout<<"Press 1 to go back to Main menu";
                              cin>>back;
                              
                              if(back==1)
                              {
                                         mainMenu();
                              }
                              else
                              {
                                   mainMenu();
                              }
                              break;
                        }
                   case 2:
                        {
                              cout<<"_______Book a flight using this system__________"<<endl;
                              r.flights();
                              break;
                        }
                   case 3:
                        {
                              cout<<"___________GET YOUR TICKET_____\n"<endl;
                              t.Bill();
                              
                              cout<<"Your ticket is printed, you can collect it \n"<<endl;
                              cout<<"Press 1 to display your ticket";
                              
                              cin>>back;
                                        if(back==1)
                                        {
                                                   t.display();
                                                   cout<<"Press any key to go back to main Menu";
                                                   cin>>back;
                                                   if(back==1)
                                                   {
                                                              mainMenu();
                                                   }
                                                   else
                                                   {
                                                       mainMenu();
                                                   }
                                        }
                                        else
                                        {
                                            mainMenu();
                                        }
                                        break;
                        }
                   case 4:
                             {
                                        cout<<"\n\n\t______THANK YOU _______"<<endl;
                                        break;
                             }
                   default:
                                {
                                        cout<<"Invalid input, Please try again!\n"<<endl;
                                        mainMenu();
                                        break;
                                }
     }

}

int main()
{
    Management Mobj;
    return 0;
}

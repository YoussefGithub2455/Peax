#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
while (true) 
{

    cout<<" "<<endl;
    cout<<""<<endl;
    cout<<" "<<endl;
    cout<<"===================================================================="<<endl;
    int choice;
    cout<<" "<<endl;
    cout<<"1.Age Calculator"<<endl;
    cout<<"2.Number Calculator"<<endl;
    cout<<"3.ASCII Calculator"<<endl;
    cout<<"4.Charcter Encrypter"<<endl;
    cout<<"5.Odd/Even number Checker"<<endl;
    cout<<"6.Phone Suggester"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<" "<<endl;
    cout<<"=============================================="<<endl;
    cout<<" "<<endl;
    cout<<"Choose a Program: ";
    cin>>choice;
    if (cin.fail()) {
    cin.clear();
    cin.ignore(1000, '\n');
    continue; 
    }
    cout<<" "<<endl;
    cout<<"=============================================="<<endl;
    cout<<" "<<endl;
    switch (choice)
    {
    case 1:
    {
        cout<<" "<<endl;
        cout<<R"(
            _                 ____      _            _       _             
   / \   __ _  ___   / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
  / _ \ / _` |/ _ \ | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 / ___ \ (_| |  __/ | |__| (_| | | (__| |_| | | (_| | || (_) | |   
/_/   \_\__, |\___|  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
        |___/                                                      
        
        )"<<endl;
        cout<<" "<<endl;
        long age;
        cout<<"Enter Your age in years: ";
        cin>>age;
        cout<<" "<<endl;
        string choose;
        cout<<"Choose: (Age in: months/days/hours/seconds): ";
        cin>>choose;
        cout<<" "<<endl;
        if (choose=="Months" || choose=="MONTHS" || choose=="months" || choose=="Month" || choose=="MONTH" || choose=="month")
        {
            cout<<"Your age in months is: "<<age*12<<" months"<<endl;
        }
        else if (choose=="Days" || choose=="DAYS" || choose=="days" || choose=="Day" || choose=="DAY" || choose=="day")
        {
            cout<<"Your age in days is: "<<age*365<<" days"<<endl;
        }   
        else if (choose=="Hours" || choose=="HOURS" || choose=="hours" || choose=="Hour" || choose=="HOUR" || choose=="hour")
        {
            cout<<"Your age in hours is: "<<age*365*24<<" hours"<<endl;
        }
        else if (choose=="Minutes" || choose=="MINUTES" || choose=="minutes" || choose=="Minute" || choose=="MINUTE" || choose=="minute")
        {
            cout<<"Your age in minutes is: "<<age*365*24*60<<" minutes"<<endl;
        }  
        else if (choose=="Seconds" || choose=="SECONDS" || choose=="seconds" || choose=="Second" || choose=="SECOND" || choose=="second")
        {
            cout<<"Your age in seconds is: "<<age*365*24*60*60<<" seconds"<<endl;
        }
        else 
        {
            cout<<"Invalid Choice !"<<endl;
        }
        cout<<" "<<endl;
        cout<<"===================================== "<<endl;
        cout<<" "<<endl;
        break;
    }
    
    case 2:
    {
        cout<<" "<<endl;
       
        cout<<R"(
         _   _                 _                       
| \ | |_   _ _ __ ___ | |__   ___ _ __         
|  \| | | | | '_ ` _ \| '_ \ / _ \ '__|        
| |\  | |_| | | | | | | |_) |  __/ |           
|_|_\_|\__,_|_| |_| |_|_.__/ \___|_|           
 / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
| |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
| |__| (_| | | (__| |_| | | (_| | || (_) | |   
 \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
        )"<<endl;
        cout<<" "<<endl;
        long n1;
        cout<<"Enter First number: ";
        cin>>n1;
        string oper;
        cout<<"Choose: (+,-,x,/,%,^): ";
        cin>>oper;
        long n2;
        cout<<"Enter Second number: ";
        cin>>n2;
        cout<<" "<<endl;

        if (oper=="+")
        {
            cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
        }
        else if (oper=="-")
        {
            cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
        }
        else if (oper=="x")
        {
            cout<<n1<<" x "<<n2<<" = "<<n1*n2<<endl;
        }
        else if (oper=="/")
        {
    
            if (n2==0)
            {
                cout<<"Can't divide by zero !"<<endl;
            }
            else 
            {
                cout<<n1<<" ÷ "<<n2<<" = "<<float(n1)/float(n2)<<endl;
            }
        }
        else if (oper=="%")
        {
            cout<<n1<<" % "<<n2<<" = "<<n1%n2<<endl;
        }
        else if (oper=="^")
        {
            cout<<n1<<" ^ "<<n2<<" = "<<pow(n1,n2)<<endl;
        }
        else
        {
            cout<<"Invalid Choice !"<<endl;
        }
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<" "<<endl;
        break;
    }

    case 3:
    {
        cout<<" "<<endl;
        cout<<R"(
    _    ____        ___ ___     ___             
   / \  / ___| / ___|_ _|_ _|  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
  / _ \ \___ \| |    | | | |  | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 / ___ \ ___) | |___ | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   
/_/   \_\____/ \____|___|___|  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
        )"  <<endl;  
        cout<<" "<<endl;
        string ch;
        cout<<" Do you want to Calculate Character or ASCII: (char/ASCII): ";
        cin>>ch;
        if (ch=="char" || ch=="Char" ||  ch==" CHAR")
        {
            int chr;
            cout<<"Enter ASCII: ";
            cin>>chr;
            cout<<" "<<endl;
            cout<<"Your Character is: "<<char(chr)<<endl;
            cout<<" "<<endl;
            cout<<"========================="<<endl;
            cout<<" "<<endl;
        }
        else if (ch=="ASCII" || ch=="ascii")
        {
            char asc;
            cout<<"Enter Character: ";
            cin>>asc;
            cout<<" "<<endl;
            cout<<"Your ASCII is: "<<int(asc)<<endl;
            cout<<" "<<endl;
            cout<<"==========================="<<endl;
            cout<<" "<<endl;
        }       
        break; 
    }

    case 4:
    {
        cout<<" "<<endl;
        cout<<R"(  ____ _                          _             
 / ___| |__   __ _ _ __ __ _  ___| |_ ___ _ __  
| |   | '_ \ / _` | '__/ _` |/ __| __/ _ \ '__| 
| |___| | | | (_| | | | (_| | (__| ||  __/ |    
 \____|_| |_|\__,_|_|  \__,_|\___|\__\___|_|    
| ____|_ __   ___ _ __ _   _ _ __ | |_ ___ _ __ 
|  _| | '_ \ / __| '__| | | | '_ \| __/ _ \ '__|
| |___| | | | (__| |  | |_| | |_) | ||  __/ |   
|_____|_| |_|\___|_|   \__, | .__/ \__\___|_|   
                       |___/|_|                 )"<<endl;
        char ch;
        cout<<" "<<endl;
        cout<<"Enter Character: ";
        cin>>ch;
        int nch=ch+=1;
        cout<<" "<<endl;
        cout<<"Your Encrypted ASCII is: "<<nch<<endl;
        cout<<" "<<endl;
        cout<<"==============================="<<endl;
        cout<<" "<<endl;
        break;
    }

    case 5:
    {
        cout<<"Odd/Even number Checker"<<endl;
        cout<<" "<<endl;
        int numb;
        cout<<"Enter Your number: ";
        cin>>numb;
        cout<<" "<<endl;
        cout<<"==============================="<<endl;
        cout<<" "<<endl;
        if (numb%2==0)
        {
            cout<<numb<<" is an even number"<<endl;
        }
        else
        {
            cout<<numb<<" is an odd number"<<endl;
        }
        cout<<" "<<endl;
        cout<<"==============================="<<endl;
        cout<<" "<<endl;
        break;
    }
    case 6:
    {
        cout<<R"( ____  _                                        
|  _ \| |__   ___  _ __   ___                   
| |_) | '_ \ / _ \| '_ \ / _ \                  
|  __/| | | | (_) | | | |  __/                  
|_|__ |_| |_|\___/|_| |_|\___|     _            
/ ___| _   _  __ _  __ _  ___  ___| |_ ___ _ __ 
\___ \| | | |/ _` |/ _` |/ _ \/ __| __/ _ \ '__|
 ___) | |_| | (_| | (_| |  __/\__ \ ||  __/ |   
|____/ \__,_|\__, |\__, |\___||___/\__\___|_|   
             |___/ |___/                        )"<<endl;
        cout<<" "<<endl;
        cout<<"==================================="<<endl;
        cout<<" "<<endl;
        int budget;
        cout<<"Enter Your Budget in $: ";
        cin>>budget;
        string focus;
        cout<<"Are you focusing on the camera, performance, UI, or All ?: (cam/per/UI/All): ";
        cin>>focus;
        cout<<" "<<endl;
        cout<<"============================================"<<endl;
        cout<<" "<<endl;

        if (budget>100 && budget<=200 && (focus=="cam" || focus=="Cam" || focus=="CAM"))
        {
            cout<<"Xiaomi Redmi Note 14 is the best cheap phone that focuses on the camera."<<endl;
        }
        else if (budget>100 && budget<=200 && (focus=="per" || focus=="Per" || focus=="PER"))
        {
            cout<<"Realme 14X is the best cheap phone that focuses on Performance"<<endl;
        }
        else if (budget>100 && budget<=200 && (focus=="UI" || focus=="ui" || focus=="Ui" || focus=="uI"))
        {
            cout<<"Samsung Galaxy A17 is the best cheap phone that focuses on UI"<<endl;
        }
        else if (budget>100 && budget<=200 && (focus=="All" || focus=="all" || focus=="ALL"))
        {
            cout<<"Samsung Galaxy A17 is the best balanced cheap phone"<<endl;
        }
        else if (budget>200 && budget<=600 && (focus=="cam" || focus=="Cam" || focus=="CAM"))
        {
            cout<<"Google Pixel 9a is the best mid-range phone that focuses on Camera"<<endl;
        }
        else if (budget>200 && budget<=600 && (focus=="per" || focus=="Per" || focus=="PER"))
        {
            cout<<"Xiaomi POCO F7 is The best mid-range phone that focuses on Performance"<<endl;
        }
        else if (budget>200 && budget<=600 && (focus=="UI" || focus=="ui" || focus=="Ui" || focus=="uI"))
        {
            cout<<"Google Pixel 9a is the best mid-range phone that focuses on UI"<<endl;
        }
        else if (budget>200 && budget<=600 && (focus=="All" || focus=="all" || focus=="ALL"))
        {
            cout<<"Samsung Galaxy A56 is the best balanced mid-range phone"<<endl;
        }
        else if (budget>600 && budget<=950 && (focus=="cam" || focus=="Cam" || focus=="CAM"))
        {
            cout<<"Xiaomi 15T Pro is the best Flagship-killer phone that focuses on Camera"<<endl;
        }
        else if (budget>600 && budget<=950 && (focus=="per" || focus=="Per" || focus=="PER"))
        {
            cout<<"Xiaomi POCO F8 Ultra is the best Flagship-killer phone that focuses on Performance"<<endl;
        }
        else if (budget>600 && budget<=950 && (focus=="UI" || focus=="ui" || focus=="Ui" || focus=="uI"))
        {
            cout<<"iPhone 17 is the best Flagship-killer phone that focuses on UI"<<endl;
        }
        else if (budget>600 && budget<=950 && (focus=="All" || focus=="all" || focus=="ALL"))
        {
            cout<<"Samsung Galaxy S26 is the best balanced Flagship-killer phone"<<endl;
        }
        else if (budget>950 && (focus=="cam" || focus=="Cam" || focus=="CAM"))
        {
            cout<<"Xiaomi 17 Ultra is the best Flagship phone that focuses on Camera"<<endl;
        }
        else if (budget>950 && (focus=="per" || focus=="Per" || focus=="PER"))
        {
            cout<<"RedMagic 11 Pro is the best Flagship phone that focuses on Performance"<<endl;
        }
        else if (budget>950 && (focus=="UI" || focus=="ui" || focus=="Ui" || focus=="uI"))
        {
            cout<<"iPhone 17 Pro Max is the best Flagship phone that focuses on UI"<<endl;
        }
        else if (budget>950 && (focus=="All" || focus=="all" || focus=="ALL"))
        {
            cout<<"Samsung Galaxy S26 Ultra is the best balanced Flagship Phone"<<endl;
        }
        else if (budget<100)
        {
            cout<<"There is no excellent phone at this price"<<endl;
        }
        else if (focus!="cam" && focus!="Cam" && focus!="CAM" && focus!="per" && focus!="Per" && focus!="PER" && focus!="UI" && focus!="ui" && focus!="Ui" && focus!="uI" && focus!="All" && focus!="all" && focus!="ALL")
        {
            cout<<"Invalid Choice !"<<endl;
        }
        cout<<" "<<endl;
        cout<<"============================================"<<endl;
        cout<<" "<<endl;
        break;
    }
   case 7:
    {
        cout << "Exiting PeaX OS... Goodbye!" << endl;
        return 0; 
    }
    
    default:
    {
        cout << "Invalid Choice!" << endl;
        break;
    }
    }

    string ex;
    cout << "Do You want To Exit? (y/n): ";
    cin >> ex;
    
    if (ex == "y" || ex == "Y") 
    {
        break; 
    }

    cout << "\nDeveloped on Arch Linux (Kernel 6.19)" << endl;
    cout << "PC: HP 250 G1 | CPU: Core i3-2348M" << endl;
    cout << "==============================================\n" << endl;

} 
    return 0;
}
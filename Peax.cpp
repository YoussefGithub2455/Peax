#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
while (true) 
{

    system("clear");
    cout<<" "<<endl;
    cout<<R"( ____                      _    _       _                  _        ___  
|  _ \ ___  __ ___  __    / \  | |_ __ | |__   __ _       / |      / _ \
| |_) / _ \/ _` \ \/ /   / _ \ | | '_ \| '_ \ / _` |      | |     | | | |
|  __/  __/ (_| |>  <   / ___ \| | |_) | | | | (_| |      | |  _  | |_| |
|_|   \___|\__,_/_/\_\ /_/   \_\_| .__/|_| |_|\__,_|      |_| (_)  \___/ 
                                 |_|                                     )"<<endl;
    cout<<" "<<endl;
    cout<<"===================================================================="<<endl;
    int choice;
    cout<<" "<<endl;
    cout<<"1.Age Calculator"<<endl;
    cout<<"2.Number Calculator"<<endl;
    cout<<"3.ASCII Calculator"<<endl;
    cout<<"4.Charcter Encrypter"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<" "<<endl;
    cout<<"=============================================="<<endl;
    cout<<" "<<endl;
    cout<<"Choose a Program: ";
    cin>>choice;
    if (cin.fail()) {
    cin.clear(); // مسح حالة الخطأ
    cin.ignore(1000, '\n'); // تجاهل المدخلات الخاطئة
    continue; // العودة لبداية الحلقة
    }
    cout<<" "<<endl;
    cout<<"=============================================="<<endl;
    cout<<" "<<endl;
    if (choice==1)
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
    }
    
    else if (choice==2)
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
    }
    else if (choice==3)
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
    }
    else if (choice==4)
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
    }
    else if (choice==5)
    {
        break;
    }
    else
    {
        cout<<"Invalid Choice !"<<endl;
    }
    
    string ex;
    cout<<"Do You want To Exit ?: (y/n): ";
    cin>>ex;
    if (ex=="y" || ex=="Y")
    {
        break;
    }
}
    cout << "Running Peax on Arch Linux (Kernel 6.19)" << endl;
    cout << "PC: HP 250 G1 | CPU: Core i3-2348M" << endl;
    return 0;
}
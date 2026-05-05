#include <iostream>
#include <cmath>
#include <string>

int main ()
{
    while (true) 
    {
        std::cout << " " << "\n";
        std::cout << " " << "\n";
        std::cout << " " << "\n";
        std::cout << "====================================================================" << "\n";
        int choice;
        std::cout << " " << "\n";
        std::cout << "1.Age Calculator" << "\n";
        std::cout << "2.Number Calculator" << "\n";
        std::cout << "3.ASCII Calculator" << "\n";
        std::cout << "4.Charcter Encrypter" << "\n";
        std::cout << "5.Odd/Even number Checker" << "\n";
        std::cout << "6.Phone Suggester" << "\n";
        std::cout << "7.Exit" << "\n";
        std::cout << " " << "\n";
        std::cout << "==============================================" << "\n";
        std::cout << " " << "\n";
        std::cout << "Choose a Program: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue; 
        }

        std::cout << " " << "\n";
        std::cout << "==============================================" << "\n";
        std::cout << " " << "\n";

        switch (choice)
        {
        case 1:
        {
            std::cout << " " << "\n";
            std::cout << R"(
            _                 ____      _            _       _             
   / \   __ _  ___   / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
  / _ \ / _` |/ _ \ | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 / ___ \ (_| |  __/ | |__| (_| | | (__| |_| | | (_| | || (_) | |   
/_/   \_\__, |\___|  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
        |___/                                                      
        
            )" << "\n";
            std::cout << " " << "\n";
            long age;
            std::cout << "Enter Your age in years: ";
            std::cin >> age;
            std::cout << " " << "\n";
            std::string choose;
            std::cout << "Choose: (Age in: months/days/hours/seconds): ";
            std::cin >> choose;
            std::cout << " " << "\n";

            if (choose == "Months" || choose == "MONTHS" || choose == "months" || choose == "Month" || choose == "MONTH" || choose == "month")
            {
                std::cout << "Your age in months is: " << age * 12 << " months" << "\n";
            }
            else if (choose=="Days" || choose=="DAYS" || choose=="days" || choose=="Day" || choose=="DAY" || choose=="day")
            {
                std::cout << "Your age in days is: " << age * 365 << " days" << "\n";
            }  
            else if (choose=="Hours" || choose=="HOURS" || choose=="hours" || choose=="Hour" || choose=="HOUR" || choose=="hour")
            {
                std::cout << "Your age in hours is: " << age * 365 * 24 << " hours" << "\n";
            }
            else if (choose=="Minutes" || choose=="MINUTES" || choose=="minutes" || choose=="Minute" || choose=="MINUTE" || choose=="minute")
            {
                std::cout << "Your age in minutes is: " << age * 365 * 24 * 60 << " minutes" << "\n";
            }  
            else if (choose=="Seconds" || choose=="SECONDS" || choose=="seconds" || choose=="Second" || choose=="SECOND" || choose=="second")
            {
                std::cout << "Your age in seconds is: " << age * 365 * 24 * 60 * 60 << " seconds" << "\n";
            }
            else 
            {
                std::cout << "Invalid Choice !" << "\n";
            }
            std::cout << " " << "\n";
            std::cout << "===================================== " << "\n";
            std::cout << " " << "\n";
            break;
        }
        
        case 2:
        {
            std::cout << " " << "\n";
            std::cout << R"(
         _   _                 _                       
| \ | |_   _ _ __ ___ | |__   ___ _ __         
|  \| | | | | '_ ` _ \| '_ \ / _ \ '__|        
| |\  | |_| | | | | | | |_) |  __/ |           
|_|_\_|\__,_|_| |_| |_|_.__/ \___|_|           
 / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
| |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
| |__| (_| | | (__| |_| | | (_| | || (_) | |   
 \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
            )" << "\n";
            std::cout << " " << "\n";
            long n1;
            std::cout << "Enter First number: ";
            std::cin >> n1;
            std::string oper;
            std::cout << "Choose: (+,-,x,/,%,^): ";
            std::cin >> oper;
            long n2;
            std::cout << "Enter Second number: ";
            std::cin >> n2;
            std::cout << " " << "\n";

            if (oper == "+")
            {
                std::cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
            }
            else if (oper == "-")
            {
                std::cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
            }
            else if (oper == "x")
            {
                std::cout << n1 << " x " << n2 << " = " << n1 * n2 << "\n";
            }
            else if (oper == "/")
            {
                if (n2 == 0)
                {
                    std::cout << "Can't divide by zero !" << "\n";
                }
                else 
                {
                    std::cout << n1 << " ÷ " << n2 << " = " << (float)n1 / (float)n2 << "\n";
                }
            }
            else if (oper == "%")
            {
                std::cout << n1 << " % " << n2 << " = " << n1 % n2 << "\n";
            }
            else if (oper == "^")
            {
                std::cout << n1 << " ^ " << n2 << " = " << std::pow(n1, n2) << "\n";
            }
            else
            {
                std::cout << "Invalid Choice !" << "\n";
            }
            std::cout << " " << "\n";
            std::cout << "==============================" << "\n";
            std::cout << " " << "\n";
            break;
        }

        case 3:
        {
            std::cout << " " << "\n";
            std::cout << R"(
    _    ____        ___ ___     ___             
   / \  / ___| / ___|_ _|_ _|  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
  / _ \ \___ \| |    | | | |  | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 / ___ \ ___) | |___ | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   
/_/   \_\____/ \____|___|___|  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
            )" << "\n";  
            std::cout << " " << "\n";
            std::string ch;
            std::cout << " Do you want to Calculate Character or ASCII: (char/ASCII): ";
            std::cin >> ch;
            if (ch == "char" || ch == "Char" || ch == " CHAR")
            {
                int chr;
                std::cout << "Enter ASCII: ";
                std::cin >> chr;
                std::cout << " " << "\n";
                std::cout << "Your Character is: " << (char)chr << "\n";
                std::cout << " " << "\n";
                std::cout << "=========================" << "\n";
                std::cout << " " << "\n";
            }
            else if (ch == "ASCII" || ch == "ascii")
            {
                char asc;
                std::cout << "Enter Character: ";
                std::cin >> asc;
                std::cout << " " << "\n";
                std::cout << "Your ASCII is: " << (int)asc << "\n";
                std::cout << " " << "\n";
                std::cout << "===========================" << "\n";
                std::cout << " " << "\n";
            }       
            break; 
        }

        case 4:
        {
            std::cout << " " << "\n";
            std::cout << R"(  ____ _                          _             
 / ___| |__   __ _ _ __ __ _  ___| |_ ___ _ __  
| |   | '_ \ / _` | '__/ _` |/ __| __/ _ \ '__| 
| |___| | | | (_| | | | (_| | (__| ||  __/ |    
 \____|_| |_|\__,_|_|  \__,_|\___|\__\___|_|    
| ____|_ __   ___ _ __ _   _ _ __ | |_ ___ _ __ 
|  _| | '_ \ / __| '__| | | | '_ \| __/ _ \ '__|
| |___| | | | (__| |  | |_| | |_) | ||  __/ |   
|_____|_| |_|\___|_|   \__, | .__/ \__\___|_|   
                       |___/|_|                 )" << "\n";
            char ch;
            std::cout << " " << "\n";
            std::cout << "Enter Character: ";
            std::cin >> ch;
            int nch = ch + 1;
            std::cout << " " << "\n";
            std::cout << "Your Encrypted ASCII is: " << nch << "\n";
            std::cout << " " << "\n";
            std::cout << "===============================" << "\n";
            std::cout << " " << "\n";
            break;
        }

        case 5:
        {
            std::cout << "Odd/Even number Checker" << "\n";
            std::cout << " " << "\n";
            int numb;
            std::cout << "Enter Your number: ";
            std::cin >> numb;
            std::cout << " " << "\n";
            std::cout << "===============================" << "\n";
            std::cout << " " << "\n";
            if (numb % 2 == 0)
            {
                std::cout << numb << " is an even number" << "\n";
            }
            else
            {
                std::cout << numb << " is an odd number" << "\n";
            }
            std::cout << " " << "\n";
            std::cout << "===============================" << "\n";
            std::cout << " " << "\n";
            break;
        }
        case 6:
        {
            std::cout << R"( ____  _                                        
|  _ \| |__   ___  _ __   ___                   
| |_) | '_ \ / _ \| '_ \ / _ \                  
|  __/| | | | (_) | | | |  __/                  
|_|__ |_| |_|\___/|_| |_|\___|     _            
/ ___| _   _  __ _  __ _  ___  ___| |_ ___ _ __ 
\___ \| | | |/ _` |/ _` |/ _ \/ __| __/ _ \ '__|
 ___) | |_| | (_| | (_| |  __/\__ \ ||  __/ |   
|____/ \__,_|\__, |\__, |\___||___/\__\___|_|   
             |___/ |___/                        )" << "\n";
            std::cout << " " << "\n";
            std::cout << "===================================" << "\n";
            std::cout << " " << "\n";
            int budget;
            std::cout << "Enter Your Budget in $: ";
            std::cin >> budget;
            std::string focus;
            std::cout << "Are you focusing on the camera, performance, UI, or All ?: (cam/per/UI/All): ";
            std::cin >> focus;
            std::cout << " " << "\n";
            std::cout << "============================================" << "\n";
            std::cout << " " << "\n";

            if (budget > 100 && budget <= 200 && (focus == "cam" || focus == "Cam" || focus == "CAM"))
            {
                std::cout << "Xiaomi Redmi Note 14 is the best cheap phone that focuses on the camera." << "\n";
            }
            else if (budget > 100 && budget <= 200 && (focus == "per" || focus == "Per" || focus == "PER"))
            {
                std::cout << "Realme 14X is the best cheap phone that focuses on Performance" << "\n";
            }
            else if (budget > 100 && budget <= 200 && (focus == "UI" || focus == "ui" || focus == "Ui" || focus == "uI"))
            {
                std::cout << "Samsung Galaxy A17 is the best cheap phone that focuses on UI" << "\n";
            }
            else if (budget > 100 && budget <= 200 && (focus == "All" || focus == "all" || focus == "ALL"))
            {
                std::cout << "Samsung Galaxy A17 is the best balanced cheap phone" << "\n";
            }
            else if (budget > 200 && budget <= 600 && (focus == "cam" || focus == "Cam" || focus == "CAM"))
            {
                std::cout << "Google Pixel 9a is the best mid-range phone that focuses on Camera" << "\n";
            }
            else if (budget > 200 && budget <= 600 && (focus == "per" || focus == "Per" || focus == "PER"))
            {
                std::cout << "Xiaomi POCO F7 is The best mid-range phone that focuses on Performance" << "\n";
            }
            else if (budget > 200 && budget <= 600 && (focus == "UI" || focus == "ui" || focus == "Ui" || focus == "uI"))
            {
                std::cout << "Google Pixel 9a is the best mid-range phone that focuses on UI" << "\n";
            }
            else if (budget > 200 && budget <= 600 && (focus == "All" || focus == "all" || focus == "ALL"))
            {
                std::cout << "Samsung Galaxy A56 is the best balanced mid-range phone" << "\n";
            }
            else if (budget > 600 && budget <= 950 && (focus == "cam" || focus == "Cam" || focus == "CAM"))
            {
                std::cout << "Xiaomi 15T Pro is the best Flagship-killer phone that focuses on Camera" << "\n";
            }
            else if (budget > 600 && budget <= 950 && (focus == "per" || focus == "Per" || focus == "PER"))
            {
                std::cout << "Xiaomi POCO F8 Ultra is the best Flagship-killer phone that focuses on Performance" << "\n";
            }
            else if (budget > 600 && budget <= 950 && (focus == "UI" || focus == "ui" || focus == "Ui" || focus == "uI"))
            {
                std::cout << "iPhone 17 is the best Flagship-killer phone that focuses on UI" << "\n";
            }
            else if (budget > 600 && budget <= 950 && (focus == "All" || focus == "all" || focus == "ALL"))
            {
                std::cout << "Samsung Galaxy S26 is the best balanced Flagship-killer phone" << "\n";
            }
            else if (budget > 950 && (focus == "cam" || focus == "Cam" || focus == "CAM"))
            {
                std::cout << "Xiaomi 17 Ultra is the best Flagship phone that focuses on Camera" << "\n";
            }
            else if (budget > 950 && (focus == "per" || focus == "Per" || focus == "PER"))
            {
                std::cout << "RedMagic 11 Pro is the best Flagship phone that focuses on Performance" << "\n";
            }
            else if (budget > 950 && (focus == "UI" || focus == "ui" || focus == "Ui" || focus == "uI"))
            {
                std::cout << "iPhone 17 Pro Max is the best Flagship phone that focuses on UI" << "\n";
            }
            else if (budget > 950 && (focus == "All" || focus == "all" || focus == "ALL"))
            {
                std::cout << "Samsung Galaxy S26 Ultra is the best balanced Flagship Phone" << "\n";
            }
            else if (budget < 100)
            {
                std::cout << "There is no excellent phone at this price" << "\n";
            }
            else if (focus != "cam" && focus != "Cam" && focus != "CAM" && focus != "per" && focus != "Per" && focus != "PER" && focus != "UI" && focus != "ui" && focus != "Ui" && focus != "uI" && focus != "All" && focus != "all" && focus != "ALL")
            {
                std::cout << "Invalid Choice !" << "\n";
            }
            std::cout << " " << "\n";
            std::cout << "============================================" << "\n";
            std::cout << " " << "\n";
            break;
        }
        case 7:
        {
            std::cout << "Exiting PeaX OS... Goodbye!" << "\n";
            return 0; 
        }
        
        default:
        {
            std::cout << "Invalid Choice!" << "\n";
            break;
        }
        }

        std::string ex;
        std::cout << "Do You want To Exit? (y/n): ";
        std::cin >> ex;
        
        if (ex == "y" || ex == "Y") 
        {
            break; 
        }

        std::cout << "\nDeveloped on Arch Linux (Kernel 6.19)" << "\n";
        std::cout << "PC: HP 250 G1 | CPU: Core i3-2348M" << "\n";
        std::cout << "==============================================\n" << "\n";

    } 
    return 0;
}
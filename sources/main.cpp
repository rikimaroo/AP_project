#include<iostream>
#include<string>
#include<bits\stdc++.h>
#include"waxe.h"
#include"shoe.h"
#include"repair.h"

using namespace std;

int main()//hanoz oprator overloadin ezafe nakardam chon jai baraye inkar nadidam
            //ama baraye phase badi ke mikham hazine haro moghayese konam add mikonam:(
{
    waxe w1;
    shoe s1;
    repair r1;

    //just for test
    cout << "welcome...." << endl;

    int get = 0;
    cout << "adadi baraye takmil moshkhasat vared konid" << endl
         << "shoe--->(1)  waxe--->(2)  type repair--->(3)" << endl;
    cin >> get;

    string type;
    while (get == 1 || get == 2 || get == 3)
    {
        switch (get)
        {
        case 1:
            s1.set_gender();
            //---------------
            cout << "model kafsh ra entekhab konid..." << endl; 
        
            if (s1.get_gender() == "men")
            {
                cout << "1-oxford \n " << "2-kalej \n" << "3-sport" << endl;
            }
            else if (s1.get_gender() == "feminien")
            {
                cout << "1-pump \n " << "2-platform \n" << "3-sport" << endl;
            }

            cin >> type;
            transform(type.begin(), type.end(), type.begin(), ::tolower);
            s1.set_model(type);
            //-----------------

            cout << "mark kafsh ra entekhab konid (jordan, nike, ....)";
            cin >> type;
            s1.set_mark(type);
            //----------------

            s1.set_color();
            break;
        case 2:
            cout << "model waxei ke mikhaid entekhab konid \n"
             << "1-abri \n" << "2-ghatrei \n" << "3-fori \n" << "3-ferchei" << endl;
            cin >> type;

            transform(type.begin(), type.end(), type.begin(), ::tolower);//to lower type
            w1.set_model(type);
            //--------------------
            cout << "brand waxe khod ra entekhab konid...." << endl 
             << "1-panda \n" << "2-pwax \n" << "3-kingly" << endl;
            cin >> type;

            transform(type.begin(), type.end(), type.begin(), ::tolower);//to lower brand
            w1.set_model(type);
            break;
        case 3:
            cout << "noe tamir sew or glue --->";
            cin >> type;
            r1.set_type_repair(type);
            break;

        default:
            break;
        }

        cout << "adadi baraye takmil moshkhasat vared konid" << endl
            << "shoe--->(1)  waxe--->(2)  type repair--->(3)" << endl;
        cin >> get;
    }
    
    waxe * temp = &w1;
    char chose;
    cout << "aya mikhahid etelaat namayesh dade shavad?(Y/N)--->";
    cin >> chose;

    if (chose == 'Y' || chose == 'y')
    {
        temp = &s1;
        temp->print();
    }
    
    temp = nullptr;
    

    return 0;
}
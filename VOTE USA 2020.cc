#include <iostream>
#include <sstream>
using namespace std;


void candidate(int& selector)
{
string name;
cout <<"========================================= " << endl;
cout <<"========WELCOME USA-VOTING 2020 ========= " << endl;
cout <<"========================================= " << endl;
cout << "Enter 1 (ANPP) to vote MR BIDEN FOR PRESIDENT " << endl;
cout << "Enter 2 (ANC) to vote MR TRUMP FOR PRESIDENT " << endl;
cout << "Enter 3 (EFF) to vote MR DICK FACE  FOR PRESIDENT " << endl;
cout << "Enter 4 (DA) to vote MRS NOBODY FOR PRESIDENT " << endl;
cout << "Please select: " << endl;
cin >> selector;

switch(selector)
{
case 1:
cout << "YOU SELECTED 1 (ANPP) TO VOTE MR BIDEN" << endl;
cout << "Enter your full name to confirm your vote: " << endl;
cin >> name;
cout << endl;
cout <<"========================================= " << endl;
cout << "THANK YOU " << name <<" FOR VOTING ANPP" << endl;
break;
case 2:
cout << "YOU SELECTED 2 (ANC) TO VOTE MR TRUMP" << endl;
cout << "Enter your full name to confirm your vote: " << endl;
cin >> name;
cout << endl;
cout <<"========================================= " << endl;
cout << "THANK YOU " << name <<" FOR VOTING ANC" << endl;
break;
case 3:
cout << "YOU SELECTED 3 (EFF) TO VOTE MR BIDEN" << endl;
cout << "Enter your full name to confirm your vote: " << endl;
cin >> name;
cout << endl;
cout <<"========================================= " << endl;
cout << "THANK YOU " << name <<" FOR VOTING EFF" << endl;
break;
case 4:
cout << "YOU SELECTED 4 (ANC) TO VOTE MR DICK FACE" << endl;
cout << "Enter your full name to confirm your vote: " << endl;
cin >> name;
cout << endl;
cout <<"========================================= " << endl;
cout << "THANK YOU " << name <<" FOR VOTING DA" << endl;
break;
default :
cout << " WRONG SELECTION, Please Select between 1 - 4 " << endl;

}
}

// Validate pin
bool verify(string PIN)
{
if(PIN.length() != 5)
return false;
else
return true;
}

int main()
{

string check, year, idNumber, gender, name;
int age, select;


cout << "Enter an ID number: ";
cin >> idNumber;
year = idNumber.substr(0,2);
gender = idNumber.substr(6, 1);

if(year < "10" )
year = "20" + year;
else
year = "19" + year;
if(idNumber.substr(6,1) <= "4" )
gender = "F";
else
gender = "M";

// Convert string to int for mathematical operation
stringstream(year) >> age;
age = 2017 - static_cast<int>(age);

//Validate age for eligibility
if(age < 18){
cout << "Your age is: " << age << endl;
cout << "You are NOT eligible to vote" << endl;
}
else
{
cout << "You are eligible to vote, your age is " << age <<"," << " gender "<< gender << endl;
cout << "Enter five digit pin number: ";
cin >> check;
if(verify(check) == 1 && check == "50505" )
{
candidate(select);
}
else
cout << "Invalid PIN" << endl;
}
return 0;
}
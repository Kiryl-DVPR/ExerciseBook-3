#include <iostream>
#include "3.16.h"
using namespace std;

int main()
{
    string nameOfPerson;
    string nameOfFamily;
    int ageDay;
    int ageMonth;
    int ageYear;
    HeartRates myHeartRates;

    cout << myHeartRates.getPersonName();
    cout << "\nPlease enter the Person Name: " ;
    getline( cin, nameOfPerson);
    myHeartRates.setPersonName(nameOfPerson);


    cout << myHeartRates.getFamilyName();
    cout << "\nPlease enter the Family Name: " ;
    getline( cin, nameOfFamily);
    myHeartRates.setFamilyName(nameOfFamily);

    //cout << myHeartRates.getAgeDay();//
    cout << "\nPlease enter the Date of Birth: " ;
    cin >> ageDay; 
    cin >> ageMonth; 
    cin >> ageYear; 
    myHeartRates.setAgeDay(ageDay);
    myHeartRates.setAgeMonth(ageMonth);
    myHeartRates.setAgeYear(ageYear);
       
    cout << endl;

    myHeartRates.displayMessege();

}
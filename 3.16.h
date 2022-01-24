#include <iostream>
#include<string>
using namespace std;

class HeartRates
{
public:

    void setPersonName(string name)
    {
        personName = name;
    }
    string getPersonName()
    {
        return personName;
    }

    void setFamilyName(string name)
    {
        familyName = name;
    }
    string getFamilyName()
    {
        return familyName;
    }


    void setAgeDay(int day)
    {
        dayBirth=day;
    }
    int getAgeDay()
    {
        return dayBirth;
    }


    void setAgeMonth(int month)
    {
        monthBirth=month;
    }
    int getAgeMonth()
    {
        return monthBirth;
    }


    void setAgeYear(int year)
    {
        yearBirth=year;
    }
    int getAgeYear()
    {
        return yearBirth;
    }

    int getAge()
    {
        age=2022-yearBirth;
        return age;
    }
    

    int getMaxiumumHeartRate()
    {
        maxiumumHeartRate=220-getAge();
        return maxiumumHeartRate;
    }

    int getTargetHeartRate50()
    {
        targetHeartRate=getMaxiumumHeartRate()*0.5;
        return targetHeartRate;
    }
    int getTargetHeartRate85()
    {
        targetHeartRate=getMaxiumumHeartRate()*0.85;
        return targetHeartRate;
    }

    void displayMessege()
    {
        cout << "Personal data: " << endl << "- Name: " << getPersonName() << endl << "- Family Name: " << getFamilyName() << endl << "- Date of Birth: " 
        << getAgeDay() << "." << getAgeMonth() << "." << getAgeYear() << endl << "- Age: " << getAge() << endl << "- Maxiumum Heart Rate: " << getMaxiumumHeartRate() << " bpm" 
        << endl << "- Taret Heart Rate: " << getTargetHeartRate50() << " - " << getTargetHeartRate85() << " bpm";

    }

    
private:
    string personName;
    string familyName;
        int monthBirth;
        int dayBirth;
        int yearBirth;
        int age;
        int maxiumumHeartRate;
        int targetHeartRate;

};
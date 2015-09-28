//
//  DictionaryEntry.cpp
//  Birthday-Dictionary
//
//  Created by Lindsey Hogg on 5/18/15.
//  Copyright (c) 2015 Lindsey Hogg. All rights reserved.
//

#include <string>
#include "DictionaryEntry.h"

using namespace std;

DictionaryEntry::DictionaryEntry(){
    name = "jane doe";
    day = 1;
    month = 1;
    year = 1900;
}

void DictionaryEntry::setName(string data){
    name = data;
}
string DictionaryEntry::getName(){
    return name;
}

void DictionaryEntry::setDay(int data){
    day = data;
}
int DictionaryEntry::getDay() const {
    return day;
}

void DictionaryEntry::setMonth(int data){
    month = data;
}
int DictionaryEntry::getMonth(){
    return month;
}

void DictionaryEntry::setYear(int data){
    year = data;
}
int DictionaryEntry::getYear(){
    return year;
}

// Note about the overloaded operators:
//    This dictionary program will only need to compare the days of
//    each entry's birthday, so the operators are overloaded only
//    to compare the "day" member variables.
bool DictionaryEntry::operator> (const DictionaryEntry& d) const{
    return (day > d.getDay());
}
bool DictionaryEntry::operator== (const DictionaryEntry& d) const{
    return (day == d.getDay());
}

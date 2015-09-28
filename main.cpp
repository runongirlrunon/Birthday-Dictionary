//
//  main.cpp
//
//  Created by Lindsey Hogg on 5/10/15.
//  Copyright (c) 2015 Lindsey Hogg. All rights reserved.
//

#include <iostream>
#include <string>
#include "SortedListHasA.h"
#include "DictionaryEntry.h"

using namespace std;

void displayList(SortedListInterface<DictionaryEntry>*);

int main(int argc, const char * argv[]) {
    
    // initialize the Dictionary array, which is an array of sorted lists
    SortedListInterface<DictionaryEntry>* dictionary[12];
    for (int i = 0; i < 12; i++) {
        dictionary[i] = new SortedListHasA<DictionaryEntry>();
    }
    
    // a bunch of seed data to test the program
    DictionaryEntry newEntry;
    newEntry.setName("Zach");
    newEntry.setMonth(2);
    newEntry.setDay(22);
    newEntry.setYear(1983);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Lindsey");
    newEntry.setMonth(6);
    newEntry.setDay(21);
    newEntry.setYear(1987);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Katie");
    newEntry.setMonth(7);
    newEntry.setDay(27);
    newEntry.setYear(1961);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Terry");
    newEntry.setMonth(3);
    newEntry.setDay(28);
    newEntry.setYear(1954);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Brad");
    newEntry.setMonth(8);
    newEntry.setDay(29);
    newEntry.setYear(1984);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Kevin");
    newEntry.setMonth(12);
    newEntry.setDay(19);
    newEntry.setYear(1991);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Melissa");
    newEntry.setMonth(7);
    newEntry.setDay(27);
    newEntry.setYear(1987);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Krista");
    newEntry.setMonth(11);
    newEntry.setDay(7);
    newEntry.setYear(1986);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Myles");
    newEntry.setMonth(11);
    newEntry.setDay(7);
    newEntry.setYear(1982);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Paul");
    newEntry.setMonth(10);
    newEntry.setDay(30);
    newEntry.setYear(1979);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    newEntry.setName("Grandma");
    newEntry.setMonth(1);
    newEntry.setDay(27);
    newEntry.setYear(1927);
    dictionary[newEntry.getMonth()-1]->insertSorted(newEntry);
    
    int entry = 0;
    
    while (entry != 3) {
        // user interface
        cout << "What operation would you like to perform?" << endl;
        cout << "\t1. Add a new entry." << endl;
        cout << "\t2. Display one month of entries." << endl;
        cout << "\t3. Display all entries and quit program." << endl;
        
        cin >> entry;
        
        if (entry == 1) {
            DictionaryEntry newEntry;
            string name;
            int month, day, year;
            
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter month of birthday: ";
            cin >> month;
            cout << "Enter day of birthday: ";
            cin >> day;
            cout << "Enter year of birthday: ";
            cin >> year;
            
            newEntry.setName(name);
            newEntry.setMonth(month);
            newEntry.setDay(day);
            newEntry.setYear(year);
            
            dictionary[month-1]->insertSorted(newEntry);
        }
        
        else if (entry == 2) {
            int whichMonth = 0;
            cout << "Which month would you like to see?" << endl;
            cin >> whichMonth;
            cout << "Here are the entries for the month you selected: " << endl;
            displayList(dictionary[whichMonth-1]);
        }
    }
    
    for (int i = 0; i < 12; i++) {
        displayList(dictionary[i]);
    }
    return 0;
}

void displayList(SortedListInterface<DictionaryEntry>* oneMonth)
{
    for (int pos = 1; pos <= oneMonth->getLength(); pos++)
    {
        cout<< oneMonth->getEntry(pos).getName();
        cout << " - " << oneMonth->getEntry(pos).getMonth() << "/" << oneMonth->getEntry(pos).getDay() << "/" << oneMonth->getEntry(pos).getYear();
        cout << endl;
    } // end for
}  // end displayList
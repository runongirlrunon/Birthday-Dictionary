//
//  DictionaryEntry.h
//  Birthday-Dictionary
//
//  Created by Lindsey Hogg on 5/18/15.
//  Copyright (c) 2015 Lindsey Hogg. All rights reserved.
//

#ifndef __Birthday-Dictionary__DictionaryEntry__
#define __Birthday-Dictionary__DictionaryEntry__

#include <stdio.h>
#include <string> 

using namespace std;

class DictionaryEntry{
private:
    string name;
    int day, month, year;
public:
    DictionaryEntry();
    
    void setName(string);
    string getName();
    
    void setDay(int);
    int getDay() const;
    
    void setMonth(int);
    int getMonth();
    
    void setYear(int);
    int getYear();
    
    // overloaded operators to use with getPosition in SortedListHasA
    bool operator>(const DictionaryEntry&) const;
    bool operator==(const DictionaryEntry&) const;
};

#endif /* defined(__Birthday-Dictionary__DictionaryEntry__) */

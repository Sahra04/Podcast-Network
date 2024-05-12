#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <string>
#include "Episode.h"


using namespace std;

class Search {

    friend ostream& operator<<(ostream&, const Search&); 
    public: 
        virtual bool matches(const Episode*) const= 0; 
        virtual void print(ostream& ost) const = 0; 

};


class H_Search : virtual public Search {
    public: 
        H_Search(const string& h); 
        bool matches(const Episode*) const;
        void print(ostream& ost) const; 

    private: 
        string host; 

}; 

class C_Search : virtual public Search{
    public:
        C_Search(const string& c);
        bool matches(const Episode*) const; 
        void print(ostream& ost) const; 


    private: 
        string category; 


}; 

class HorC_Search: public H_Search, public C_Search {
    public:
        HorC_Search(const string& host, const string& category); 
        bool matches(const Episode*) const;
        void print(ostream& ost) const; 

};

#endif
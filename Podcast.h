#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include <string>
#include "Array.h"
#include "Episode.h"


using namespace std;

class Podcast{
    friend ostream& operator<<(ostream&, const Podcast&);
    public: 
        Podcast(const string& t, const string& h); 
        ~Podcast();

        bool equals(const string& title) const; 
        Episode* get(int index) const; 
        Array<Episode*>& epsArray(); 
        int getSize() const; 
        void print(ostream&) const; 
        void printWithEpisodes(ostream&) const;
        void add(Episode* eps); 


    private: 
        Array<Episode*> elements; 
        string title;
        string host; 





}; 
#endif
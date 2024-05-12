#ifndef PODIFY_H
#define PODIFY_H

#include <iostream>
#include <string>
#include "Episode.h"
#include "Podcast.h"
#include "Search.h"
#include "Array.h"

using namespace std;

class Podify{

    public: 
        Podify();
        ~Podify();
    
        void addPodcast(Podcast* podcast); 
        void addEpisode(Episode* eps, const string& podcastTitle);
        const Array<Podcast*>& getPodcasts() const; 
        Podcast* getPodcast(int index) const; 
        Podcast* getPodcast(string title) const;
        void getEpisodes(const Search& search, Array<Episode*>& match); 

    private: 
        Array<Podcast*> podcasts; 


}; 
#endif
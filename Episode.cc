#include "Episode.h"

Episode :: Episode(const string& pT, const string& h, const string& eT, const string& c, const string& a, const string& vF):
     podcastTitle(pT), host(h), episodeTitle(eT), category(c), audio(a), videoFile(vF){

     }

Episode::  ~Episode(){
}

void Episode:: print(ostream& os) const{
    os << "Podcast title "<< podcastTitle << endl; 
    os << "Podcast host "<< host<<endl; 
    os << "Podcast category "<<category<<endl; 
    os << "Podcast episode title "<<episodeTitle<<endl; 
}

ostream& operator<<(ostream& os, const Episode& eps){
    eps.print(os);
    return os;
}



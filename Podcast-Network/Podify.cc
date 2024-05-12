#include "Podify.h"

Podify:: Podify(){}

Podify:: ~Podify(){
    for(int i = 0; i < podcasts.getSize(); ++i){
        delete podcasts[i];
    }
}

void Podify:: addPodcast(Podcast* podcast){
    cout<<"this is the size"<<podcasts.getSize()<<endl; 
    podcasts += podcast; 

 }

void Podify:: addEpisode(Episode* eps, const string& podcastTitle){
    for(int i = 0; i<podcasts.getSize(); ++i){
        if(podcasts[i]->equals(podcastTitle)){
            podcasts[i]->add(eps); 
            return; 

        }
    }
    //output error message
    cerr<<"error: podcast doesn't exist"<<endl; 

  }


const Array<Podcast*>& Podify:: getPodcasts() const{
     cout<<"this is the size AFTER"<<podcasts.getSize()<<endl; 
    return podcasts; 

}


Podcast* Podify :: getPodcast(int index) const{
   return podcasts[index]; 
}

Podcast* Podify:: getPodcast(string title) const{
   Podcast* item = nullptr; 
   for(int i = 0; i<podcasts.getSize(); ++i){
        if(podcasts[i]->equals(title)){
            item= podcasts[i];
        }
    }
    return item; 
    //add error messages if possible 

}

void Podify ::getEpisodes(const Search& search, Array<Episode*>& match){
   for(int i = 0; i<podcasts.getSize(); ++i){
       // int size = podcasts[i]->getSize(); 
        Array<Episode*>& eps = podcasts[i]->epsArray(); 
        for(int j = 0; j < eps.getSize(); ++j){
            if (search.matches(eps[j])){
                match += eps[j];
            }

        }
    
   }

}










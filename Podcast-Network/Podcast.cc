#include "Podcast.h"

Podcast::  Podcast(const string& t, const string& h):title(t) , host(h) {

} 

Podcast:: ~Podcast(){
    for(int i = 0; i < elements.getSize(); ++i){
        delete elements[i];
    }
   
}

bool Podcast:: equals(const string& title) const{
    return this->title == title;
}

Episode* Podcast:: get(int index) const{
    if (index > elements.getSize() || index < 0 ){
        exit(1);
    }
    return elements[index]; 
}

int Podcast:: getSize() const{ 
    return elements.getSize(); 
}

void Podcast:: print(ostream& os) const{
    os<<endl;
    os<<"Title: "<< title <<endl; 
    os<<"Host: "<< host<<endl; 
}

void Podcast:: printWithEpisodes(ostream& os) const{
    print(os); 
    os<< "Printing episodes..."<<endl; 
   for(int i = 0; i<elements.getSize(); ++i){
        elements[i]->print(os);
    }

}

void Podcast:: add(Episode* eps){ 
    elements += eps; 
}

Array<Episode*>&  Podcast :: epsArray(){
    return elements; 
}


ostream& operator<<(ostream& os, const Podcast& podcast){
    podcast.print(os);
    return os;

}


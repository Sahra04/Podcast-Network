#ifndef PODCASTPLAYER_H
#define PODCASTPLAYER_H

#include <iostream>
#include <string>
#include "Episode.h"
#include <fstream>

using namespace std;

class PodcastPlayer{

    public: 
        virtual void play(const Episode& m, ostream& ost) = 0; 


};

class AudioPlayer: public PodcastPlayer {
    public: 
        void play(const Episode& m, ostream& ost);

}; 

class VideoPlayer: public AudioPlayer{
    public: 
        //VideoPlayer(const string& vf); 
        void play(const Episode& m, ostream& ost);
    private: 
        string videoFile; 
    

}; 



#endif 
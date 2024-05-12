#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>


using namespace std;

class Episode{
    friend ostream& operator<<(ostream&, const Episode&);
    public: 
        Episode(const string& pT, const string& h, const string& eT, const string& c, const string& a, const string& vF); 
        ~Episode();

        //getters
        string getPTitle() const {
            return podcastTitle; 

        }
        string getHost() const {
            return host; 
        }
        string getETitle() const{ 
            return episodeTitle; 
        }
        string getCategory() const{
            return category; 
        }
        string getAudio() const {
            return audio; 
        }
        string getVideoFile() const{
            return videoFile; 
        }

        //print function 
        void print(ostream& os) const; 


    private: 
        string podcastTitle;
        string host; 
        string episodeTitle;
        string category; 
        string audio; 
        string videoFile; 

    

};

#endif

#include "PodcastPlayer.h"



// VideoPlayer::VideoPlayer(const string& vf): videoFile(vf) {

// }
void AudioPlayer :: play(const Episode& m, ostream& ost){
    ost<<"Episode audio "<< m.getAudio() << endl; 

}

void VideoPlayer :: play(const Episode& m, ostream& ost){
    AudioPlayer::play(m, ost); 
    
    ifstream infile; 
    string s = m.getVideoFile(); 
    infile.open(s);


    if (!infile) {
        cout << "Error: could not open file" << endl;
        exit(1);
    }

    string l; 
    while (getline(infile, l)) {
        ost << l << endl;
    }

    infile.close(); 



}

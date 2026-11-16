/**
1. Declare Song and add member variables.
2. Implement all the fuctions.
3. Call functions in main()
*/

#include <iostream>
#include <string>
using namespace std;

struct Song {
    //add title, seconds, and plays
    //pick sensible data types
};

// Print something like:  "Espresso" (175s, 12 plays)
void printSong(const Song& s);

// increments plays by 1. no need to actually play anything.
void playSong(Song& s);

// Find the song and return the index number. return -1 if song not found.
int findSongByTitle(const Song songs[], int songsCount, const string& title);

int main() {
    const int N = 4;
    Song library[N] = {
        {"The Christmas Song", 175, 1200},
        {"The Chipmunk Song", 200, 3400},
        {"Here Comes Santa Claus", 203, 2100},
        {"Have Yourself a Merry Little Christmas", 167, 2900}
    };

    // TODO: print all songs
    // TODO: play "The Chipmunk Song" (find it, then call playSong)
    // TODO: Find the longest song
    return 0;
}

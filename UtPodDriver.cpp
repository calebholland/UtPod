//
// Created by caleb on 3/26/19.
//

#include <iostream>
#include <string>
#include "UtPod.h"
//#include "Song.h"

using namespace std;

int main() {

    /*
    int x = 3;
    std::cout << "Hello, World!";
    std::cout << x << std::endl;


    Song song2;

    song2.setSize(3);
    song2.setArtist("Blur");
    song2.setTitle("song 2");

    cout << song2.getArtist() << " " << song2.getTitle() << " " << song2.getSize() << endl;

    Song nextSong("Sell Out", "Reel_Big_Fish", 23);

    cout << nextSong.getArtist() << " "  << nextSong.getTitle() << " " << nextSong.getSize() <<endl;

    cout << "which song is 'less than'?" <<endl;
    if(song2 < nextSong){
        cout << song2.getTitle() << endl;
    }
    if(nextSong < song2){
        cout << nextSong.getTitle() << endl;
    }

    cout << "which song is 'greater than'?" <<endl;
    if(song2 > nextSong){
        cout << song2.getTitle() << endl;
    }
    if(nextSong > song2){
        cout << nextSong.getTitle() << endl;
    }

    cout << "Are the songs ==?" <<endl;
    if(song2 == nextSong) {
        cout << "yes" << endl;
    }
    else{
        cout << "no"<< endl;
    }

    UtPod sample;

    sample.addSong(song2);
    sample.addSong(nextSong);

    cout << sample.getTotalMemory() << endl << sample.getRemainingMemory() << endl;

    sample.showSongList();

    */

    cout << "UtPod constructor tests:--------------------------------- " <<endl <<endl;
    cout << "1. No parameters: " <<endl;

    UtPod def;

    cout << "remaining memory: " << def.getRemainingMemory() <<endl;
    cout << "Total memory: " << def.getTotalMemory() <<endl;

    cout << "2. Passing in size: 128MB: " <<endl;

    UtPod small(128);

    cout << "remaining memory: " << small.getRemainingMemory() <<endl;
    cout << "Total memory: " <<small.getTotalMemory() <<endl <<endl;


    cout << "Adding a list of normal (valid, not exceptionally large or designed to throw errors) songs:" <<endl;

    Song s1("Air", "Kelly Watch the Stars", 12);
    int result = def.addSong(s1);
    cout << "Printing the result of adding the first song: " <<result <<endl <<endl;

    Song s2("Bread", "Guitar Man", 7);
    def.addSong(s2);

    Song s3("Oingo Boingo", "Dead Man's Party", 6);
    def.addSong(s3);

    Song s4("Har Mar Superstar", "Prisoner", 21);
    def.addSong(s4);

    Song s5("Wings", "London Town", 3);
    def.addSong(s5);

    Song s6("King Crimson", "Red", 46);
    def.addSong(s6);

    Song s7("King Crimson", "Three of a Perfect Pair", 18);
    def.addSong(s7);

    Song s8("King Gizzard and the Lizard Wizard", "People Vultures", 13);
    def.addSong(s8);

    Song s9("King Crimson", "Red", 10);
    def.addSong(s9);


    cout << "All song list: ------------------------------------" << endl;
    def.showSongList();


    cout << "remaining memory: " << def.getRemainingMemory() << endl;
    cout << "total memory: " << def.getTotalMemory() << endl <<endl;

    cout << "sorted list: --------------------------------------" << endl;
    def.sortSongList();
    def.showSongList();
    cout << endl;

    cout << "shuffled list: ---------------------------------------" << endl;
    def.shuffle();
    def.showSongList();
    cout << endl;

    cout << "shuffled again list: ---------------------------------------" << endl;
    def.shuffle();
    def.showSongList();
    cout << endl;

/*
    t.removeSong(s3);
    cout << "with Hey Jude3 removed: " << endl;
    t.showSongList();
    cout << "remaining memory: " << t.getRemainingMemory() << endl;

    t.removeSong(s5);
    cout << "with Hey Jude5 removed: " << endl;
    t.showSongList();
    cout << "remaining memory: " << t.getRemainingMemory() << endl;

 */

    return 0;
}
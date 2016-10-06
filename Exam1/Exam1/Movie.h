#pragma once
#include <stdio.h>
#include <string>

//creates Movie class
class Movie
{
private: //declares movie title, genre, and showtime as private variables
	string movieTitle, movieGenre;
	int movieShowtime;
public: //declares functions as public methods
	Movie(); //Default movie for theater
	//Genres include: Action, Comedy, Horror, and Documentary. Default: Comedy
	Movie(string title, string genre, int showtime);
	string getTitle(); //Returns movie title
	string getGenre(); //Returns movie genre
	int getShowtime(); //Returns movie show time
};
#pragma once
#include <stdio.h>
#include <string>

//creates Movie class
class Movie
{
private:

public:
	Movie(); //Default movie for theater
	//Genres include: Action, Comedy, Horror, and Documentary. Default: Comedy
	Movie(string title, string genre, int showTime);
	string getTitle(); //Returns movie title
	string getGenre(); //Returns movie genre
	int getShowtime(); //Returns movie show time
};
#pragma once
#include <stdio.h>
#include <string>

//creates Theater class
class Theater
{
private: //declares string and int variables as private
	string theaterName;
	string theaterPhone;
	int popcornPrice = 3;
	int cokePrice = 2;
public: //declares functions as public methods
	Theater();
	Theater(string name, string phone); //creates Theater object given name and phone
	void AddMovie(Movie& Movie); //Adds a movie at a specific time
	//Returns movie shown at or after given hour
	string GetMovieForHour(int hour); //Returns " " if none are upcoming
	//Returns showtime for movie of given genre
	int GetShowTimeForGenre(string genre); //Returns -1 if none exist
	int GetPopcornPrice(); //Returns cost of popcorn
	int GetCokePrice(); //Returns cost of coke
};
#include <string>
#include <iostream>
#include <cstdlib>
//Includes both Theater and Movie header files
#include "Theater.h"
#include "Movie.h"
using namespace std;

//Constructs default Theater object
Theater::Theater()
{
	theaterName = "AMC";
	theaterPhone = "123";
}

//Constructs Theater object using string variables
Theater::Theater(string name, string phone)
{
	theaterName = name;
	theaterPhone = phone;
}
//Adds a movie at a specific time
void Theater::AddMovie(Movie& Movie)
{
	for (int i = 0; i < 11; i++)
	{
		titleA[i] = Movie.getTitle();
		genreA[i] = Movie.getGenre();
		showtimeA[i] = Movie.getShowtime();
	}
}
//Returns movie shown at or after given hour
string Theater::GetMovieForHour(int hour)
{
	for (int x = 0; x < 11; x++)
	{
		if (showtimeA[x] == hour)
			return titleA[x];
	}
}
//Returns movie showtime given genre
int Theater::GetShowTimeForGenre(string genre)
{
	for (int y = 0; y < 11; y++)
	{
		if (genreA[y]==genre)
			return showtimeA[y];
	}
}
//Retruns price of popcorn
int Theater::GetPopcornPrice()
{
	return popcornPrice;
}
//Returns price of coke
int Theater::GetCokePrice()
{
	return cokePrice;
}
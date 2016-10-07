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
		titleA[i] = Movie.getTitle();
		genreA[i] = Movie.getGenre();
		showtimeA[i] = Movie.getShowtime();
		i++;
}
//Returns movie shown at or after given hour
string Theater::GetMovieForHour(int hour)
{
	if (hour >= 0 && hour <= 23)
	{
		for (int h = 0; h < 24; h++)
		{
			for (int x = 0; x < 11; x++)
			{
				if (showtimeA[x] == (hour + h))
					return titleA[x];
			}
		}
	}
	else
		return "";
	
}
//Returns movie showtime given genre
int Theater::GetShowTimeForGenre(string genre)
{
	for (int y = 0; y < 11; y++)
	{
		if (genreA[y]==genre)
			return showtimeA[y];
	}
	return -1;
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
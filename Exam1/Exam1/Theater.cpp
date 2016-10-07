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
	//inputs movie titles, genres, and showtimes into arrays
		titleA[i] = Movie.getTitle();
		genreA[i] = Movie.getGenre();
		showtimeA[i] = Movie.getShowtime();
		//increments i by 1 each time the function is run
		i++;
}
//Returns movie shown at or after given hour
string Theater::GetMovieForHour(int hour)
{
	//uses if statements distinguish between correct and incorrect hours
	if (hour >= 0 && hour <= 23)
	{
		//uses for loop to find nearest showtime after the hour
		for (int h = 0; h < 24; h++)
		{
			//uses for loop to sort through movie showtimes
			for (int x = 0; x < 11; x++)
			{
				//if the showtime is equal to the hour (or the nearest hour,)
				//the movie title is returned
				if (showtimeA[x] == (hour + h))
					return titleA[x];
			}
		}
	}
	//if an incorrect hour is used, nothing is returned
	else
		return "";
	
}
//Returns movie showtime given genre
int Theater::GetShowTimeForGenre(string genre)
{
	//uses for loop to find the correct genre by sorting through movies
	//with each iteration and returning showtime once match is found
	for (int y = 0; y < 11; y++)
	{
		if (genreA[y]==genre)
			return showtimeA[y];
	}
	//returns -1 if genre does not exist
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
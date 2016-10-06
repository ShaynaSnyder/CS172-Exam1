#include <string>
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

}
//Returns movie shown at or after given hour
string Theater::GetMovieForHour(int hour)
{

}
//Returns movie showtime given genre
int Theater::GetShowTimeForGenre(string genre)
{

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
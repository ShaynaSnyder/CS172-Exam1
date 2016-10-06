#include <string>
#include "Movie.h" //Includes Movie header file
using namespace std;

//constructs default movie object
Movie::Movie()
{
	movieTitle = "Star Wars: The Force Awakens";
}
//constructs Movie object using string and int variables
Movie::Movie(string title, string genre, int showtime)
{
	movieTitle = title;
	if (genre == "Action" || genre == "Horror" || genre == "Documentary")
		movieGenre = genre;
	else
		movieGenre = "Comedy";
	movieShowtime = showtime;
}
string Movie::getTitle() //get function gets movie title
{
	return movieTitle;
}
string Movie::getGenre() //get function gets movie genre
{
	return movieGenre;
}
int Movie::getShowtime() //get function gets movie showtime
{
	return movieShowtime;
}
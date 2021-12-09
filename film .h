#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<stdlib.h>

using namespace std;

class Film
{

private:

	string picture_name;
	string picture_year;
	string picture_nominations;
	string picture_rating;
	string picture_duration;
	string picture_genre1;
	string picture_genre2;
	string picture_release;
	string picture_metacritic;
	string picture_synopsis;

public:

	//Default Constructor
	Film();

	//Overload Constructor
	Film(string, string, string, string, string, string, string, string, string, string);

	//Destrutor
	~Film();

	string getPicture_name() const;
	//getYear
	//@return string - name

	string getPicture_year() const;
	//getYear
	//@return string - year

	string getPicture_nominations() const;
	//getYear
	//@return string - nominations

	string getPicture_rating() const; 
	//getYear
	//@return string - rating

	string getPicture_duration() const;
	//getYear
	//@return string - duration 

	string getPicture_genre1() const;
	//getYear
	//@return string - genre1 

	string getPicture_genre2() const;
	//getYear
	//@return string - genre2 

	string getPicture_release() const;
	//getYear
	//@return string - release 

	string getPicture_metacritic() const;
	//getYear
	//@return string - metacritic 

	string getPicture_synopsis() const;
	//getYear
	//@return string - synopsis 


	//Mutators that should be needed for later in assignment

	void setPicture_name(string);
	void setPicture_year(string);
	void setPicture_nominations(string);
	void setPicture_rating(string);
	void setPicture_duration(string);
	void setPicture_genre1(string);
	void setPicture_genre2(string);
	void setPicture_release(string);
	void setPicture_metacritic(string);
	void setpicture_synopsis(string);
};


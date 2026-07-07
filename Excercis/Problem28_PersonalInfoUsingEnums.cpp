#include<iostream>
using namespace std;
enum Gender{Male,Female};
enum Status{Married,Single};
enum Favcolor{Red,Blue,Pink,Purple};
int main()
{
	Gender MyGender;
	Status MyStatus;
	Favcolor MyFavcolor;

	MyGender = Gender::Female;
	MyStatus = Status::Single;
	MyFavcolor = Favcolor::Pink;
	return 0;

}
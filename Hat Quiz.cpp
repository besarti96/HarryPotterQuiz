// ***************************************************
// Projekt:      
// Copyright:    
// Author: Besart Jashari       
// Datum:        
// Programmname: 
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>

	using namespace std;

	int main(){
	
	 int  griffindor;
  int  hufflepuff;
  int  ravenclaw;
  int  slytherin;
  int answer1;
  int answer2;
  int answer3;
  int answer4;
  int max = 0;
  string house;

  cout << "The Sorting Hat Quiz!\n\n";
  cout << "When I`m dead, I want people to remember me as:\n";
  cout << " 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n\n";

  cin >> answer1;


  if(answer1 == 1){
    hufflepuff++;
  }
  else if(answer1 == 2){
    slytherin++;
  }
  else if(answer1 == 3){
    ravenclaw++;
  }
  else if(answer1 == 4){
    griffindor++;
  }
  else{
    cout << "invalid input.. Try Again\n";
  }

  cout << "\n\nQ2) Dawn or Dusk?\n 1) Dawn\n 2) Dusk \n\n";
  cin >> answer2;

  if(answer2 == 1){
    griffindor++;
    ravenclaw++;
  }
  else if(answer2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else{
    cout << "Invalid input";
  }

  cout << "\n Q3) Which kind of instrument most pleases your ear?\n 1) The violin\n 2) The trumpet\n 3) The piano\n 4) The drum\n\n";

  cin >> answer3;

  if(answer3 == 1){
    slytherin++;
  }
  else if(answer3 == 2){
    hufflepuff++;
  }
  else if(answer3 == 3){
    ravenclaw++;
  }
  else if(answer3 == 4){
    griffindor++;
  }
  else{
    cout << "Invalid input";
  }

  cout << "Q4) Which road tempts you most?\n\n 1) The wide, sunny grassy lane\n 2) The narrow, dark, latern-lit alley\n 3) The twisting, leaf-strewn path through woods\n 4) The cobbled street lined (ancient buildings)\n\n";

  cin >> answer4;

   if(answer4 == 1){
    hufflepuff++;
  }
  else if(answer4 == 2){
    slytherin++;
  }
  else if(answer4 == 3){
    griffindor++;
  }
  else if(answer4 == 4){
    ravenclaw++;
  }
  else{
    cout << "Invalid input";
  }

  if (griffindor > max){
    max = griffindor;
    house = "Griffindor";
  }
  if (hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if(slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  cout << "\n" << house << "!\n";


//getchar();
	system("PAUSE");
	return 0;
}

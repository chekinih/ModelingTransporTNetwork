#include <iostream>
#include "Train.h"

	Train::Train ():
	Moyens(250, 1.5, 1000, "Train"){

	}
	Train::~Train(){
		std::cout << "destructeur Train" << std::endl;
	}

 void Train::afficher() const{
	 std::cout << "      Train de ";
	 Moyens::afficher();
 }


 const std::string& Train::getName()const{
	 return name;
 }

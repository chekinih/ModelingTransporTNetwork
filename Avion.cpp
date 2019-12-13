#include <iostream>
#include "Avion.h"

	Avion::Avion ():Moyens(700, 18.0, 150, "Avion"){

	}
	Avion::~Avion (){
		std::cout << "destructeur Avion" << std::endl;
	}
	void Avion::afficher() const{
 	 std::cout << "      Avion de ";
 	 Moyens::afficher();
  }

	const std::string& Avion::getName()const{
 	 return name;
  }

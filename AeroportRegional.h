#ifndef AEROPORT_REGIONAL
#define AEROPORT_REGIONAL

#include <iostream>
#include "Terminal.h"

class AeroportRegional: public Terminal
{
  private:
      const int MAX_LIAISON;
  public:
    AeroportRegional(std::string _nom);
    AeroportRegional(std::string _nom, double lat, double lng, double temps);
    ~AeroportRegional();

    int ajouterLiaison(Terminal* terminal);
    bool estUneGare();
    bool estUnHubMultimodal();
    void afficher();
};
#endif

//
//  Employe.hpp
//  aliii
//
//  Created by infotech on 05/11/2020.
//  Copyright © 2020 infotech. All rights reserved.
//

#ifndef Employe_hpp
#define Employe_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Employe{
    
private:
    string nom;
    string prenom;
    char* materiels;
    static int nombreEmploye;
public:
    Employe(string, string);  // Constructeur avec parametre
    Employe(const Employe &E); // Constructeur de recopie
    ~Employe(); // Deconstructeur
    void afficher() const;
    static int nombreEmployes();
    bool operator==(const Employe &E);
};




#endif /* Employe_hpp */

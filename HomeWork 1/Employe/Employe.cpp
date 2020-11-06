//
//  Employe.cpp
//  aliii
//
//  Created by infotech on 05/11/2020.
//  Copyright © 2020 infotech. All rights reserved.
//

#include "Employe.hpp"
#include <iostream>
#include <string>
using namespace std;


int Employe::nombreEmploye = 0;

// L'implementation de constructeur avec paramètres

Employe::Employe(string nom, string prenom){
    Employe::nombreEmploye++;
    this->nom = nom;
    this->prenom = prenom;
    this->materiels = (char*)malloc(sizeof(char)*4);
}

// L'implementation de constructeur de recopie

Employe::Employe(const Employe &E){
    Employe::nombreEmploye++;
    this->nom = E.nom;
    this->prenom = E.prenom;
}

// L'implementation de deconstructeur

Employe::~Employe(){
    delete this;
}

// L'implementation de la methode statique pour calculer le nombre des employés

int Employe::nombreEmployes(){
    return Employe::nombreEmploye;
}

// L'implementation de la methode d'affichage des employés

void Employe::afficher() const{
    cout << "Nom: " << this->nom << "| Prenom: " << this->prenom << endl;
}

// L'implementation de la methode de comparaison de deux objets

bool Employe::operator==(const Employe &E){
    if(this->nom== E.nom && this->prenom==E.prenom){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    Employe E("CHEKHCE", "Ali");  // Creation statique
    
    Employe *E1;
    E1 = new Employe("HANSALI", "Mehdi"); // Creation dynamique METHODE 1
    
    Employe E3(*E1); // Constructeur de recopie par defaut
    
    Employe *E4;
    
    E4 = (Employe*)malloc(sizeof(Employe)+1); // Creation dynamqiue avec reservation de la memoire METHODE 2
    
    //Employe E5;  // Declaration statique
    
    E4->afficher();
    
    if(E1->operator==(E3)){
        cout << "Les deux employés sont égaux" << endl;    }
    else{
        cout << "Les deux employés sont différents" << endl;
    }
    
    
    E.afficher();
    E1->afficher();
    E3.afficher();
    
    cout << "Nombre des employés enregistrés : " << Employe::nombreEmployes() << endl;
    
    
    return 0;
}





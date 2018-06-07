

enum EtatDuJeu {finTemps, finGagnante, finAbandon, pretADemarrer, enAttenteCarte1, enAttenteCarte2, deuxCartesRetournees};

#include "Carte.h"
#include "Plateau.h"

#ifndef MEMORY_H
#define MEMORY_H

class Memory
{
    public:
        Memory();//Constructeur par défault
        virtual ~Memory();//Destructeur de la classe Memory
        EtatDuJeu getEtatJeu();//Connaitre l'état du jeu
        void setEtat(EtatDuJeu);//Modifie l'état du jeu
        int getTempsMaxAlloue();//Recupère le temps maximum attribué au joueur
        void setTempsMaxAlloue(int);//Modifier le temps afficher
        int getTempsRestant();//Récupère le temps restant au joueur
        void setTempsRestant(int);//Modifie le temps restant au joueur
        int getNbCoupsJoues();//Récupère le nombre de fait par le joueur
        void setNbCoupsJoues(int);//Modifie le nombre de coup jouer par l’utilisateur

        Plateau* getPlateau();//Récupère les informations du plateau
        int getNbCartesUtilisees();//Récupère le nombre de carte sur le plateau
        void setNbCartesUtilisees(int);//Modifie le nombre de carte utilisée sur le plateau
        void ajouterCarteUtilisees(Carte&);//Ajoute une nouvelle carte aux cartes utilisées
        bool compareCarte(Carte&, Carte&);//Compare les deux cartes passées en paramètre

        void demarrerPartie();//Démarre la partie de Memory
        void abandonnerPartie();//Abandonner la partie actuelle
        void terminerPartieTempsRestantEcoule();//Termine la partie lorsque le temps imparti est fini
        void terminerPartieCartesRassemblees();//Termine la partie lorsque le joueur trouve toutes les combinaisons de carte
        void tempsPauseEcoule();//
        bool carteRetournee(int, int);//indique si la carte est retournée : true si oui, false sinon

    protected:
        EtatDuJeu m_etatJeu;  //L'état dans lequel le jeu se trouve
        int m_nbCartesUtilisees; //le nombre de cartes utilisées sur le plateau
        int m_nbCarteARassembler;//Le nombre de cartes à trouver sur le plateau
        int m_tempsMaxAlloue;   //Indique le temps maximum donné à l'utilisateur pour sa partie
        int m_tempsRestant;     //Indique le temps restant à l'utilisateur pour sa partie
        int m_nbCoupsJoues;     //Le nombre de coups faits par l'utilisateur
        int m_nbPairesTrouvees;//Le nombre de combinaisons trouvées par l'utilisateur

};

#endif

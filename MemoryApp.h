
#DEFINE MEMORYAPP_H
#include "MemoryApp.h"
#include "Memory.h"

// Permet à wxWidgets de crééer l'instance d'application
IMPLEMENT_APP(MemoryApp)

// Implémentation de la méthode OnInit()
   bool MemoryApp::OnInit()
   {
       // Création de la fenêtre principale de l'application
       Principale *maFen = new Principale(wxT("Jeu du Memory"));
       // Rendre la fenêtre visible
       maFen -> Show(true);

       // Démarre la boucle des messages
       return true;
    }



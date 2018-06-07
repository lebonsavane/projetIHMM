#include "MemoryPrincipal.h"

BEGIN_EVENT_TABLE(MemoryPrincipal,wxFrame)
    EVT_CLOSE(MemoryPrincipal::quitterMemory)
    EVT_BUTTON(MemoryPrincipal::buttonDemarrerAbandonnerClick)
    EVT_BUTTON(MemoryPrincipal::retournerCarte)
    EVT_TIMER(MemoryPrincipal::timer)
    EVT_TIMER(MemoryPrincipal::timer1seconde)
END_EVENT_TABLE()



Principale::Principale(const wxString& title) : wxFrame(NULL,
                                                wxID_ANY,
                                                title)
{
    int nbLig = 4;
    int nbCol = 4;
    int nbCase = nbLig * nbCol;

     grille = new wxGridSizer(nbLig,nbCol,5,5); // nb ligne, nb colonne, espaceX entre 2 élements, espaceY entre deux éléments


     chrono = new wxTimer(chrono,wxID_ANY);
     seconde = new wxTimer(seconde,wxID_ANY);

     //Affichage de l'interface initial
     score = new wxStaticText(this,wxID_ANY,wxT("paires : 0"),wxPoint());
     tpsRestant = new StaticText(this, wxID_ANY, wxT("temps restant(sec) : 60"), wxPoint());
     cpsJoues = new StaticText(this, wxID_ANY, wxT("coups : 0"), wxPoint());

    //Création du bouton démarrer
     wxButton *demarrerAbandonner = new wxButton(this,wxID_ANY,wxT("Démarrer !"), wxPoint());


     interface = new wxBoxSizer(wxHORIZONTAL);
     toutLeJeu = new wxBoxSizer(wxVERTICAL);

     interface->Add(tpsRestant,1, wxALL|wxEXPAND,5);
     interface->Add(score,1, wxALL|wxEXPAND,5);
     interface->Add(cpsJoues,1, wxALL|wxEXPAND,5);

     //Création de la grille de carte

     wxString nomDosCarte;
     wxString cheminCollection;
     nomDosCarte = wxT("");


     string nomDuFichier = "Disney_0.gif";
     nomDosCarte = wxString (nomDuFichier.c_str(), wxConvUTF8);

     cheminCollection = wxString(CHEMIN_COLLECTION.c_str(), wxConvUTF8);

     wxImage image;
     image.AddHandler(new wxGIFHandler);
     image.LoadFile(cheminCollection + nomDosCarte, wxBITMAP_TYPE_GIF);

     for(i=0;i<nbCase;i++)
     {

        // Faire un tableau de carte

        carte = new wxbitMapButton(this,
                                wxID_ANY,
                                wxBitmap(image.Scale()),
                                wxDefaultPosition,
                                wxDefaultSize,
                                wxBU_AUTODRAW,
                                wxDefaultValidator,
                                wxT("")
                                );

        grille->Add(cartei,
                    1,
                    wxALL|wxEXPAND,
                    5
                    );

     }

     carte0 = new wxbitMapButton(this,
                                wxID_ANY,
                                wxBitmap(image.Scale()),
                                wxDefaultPosition,
                                wxDefaultSize,
                                wxBU_AUTODRAW,
                                wxDefaultValidator,
                                wxT("")
                                );

    grille->Add(carte0,
                    1,
                    wxALL|wxEXPAND,
                    5
                    );
}

/*


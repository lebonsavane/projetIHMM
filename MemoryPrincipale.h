
#ifndef MEMORYPRINCIPAL_H
#define MEMORYPRINCIPAL_H

#include <wx/wx.h>
#include "Memory.h"
#include "constantesCommunes.h"

enum
{
    ID_btnBitmap = wxID_HIGHEST + 1,
};


class Memory : public wxFrame
{
private:

    // Le plateau
    wxGridSizer *grille;

    // Les cartes
    wxbitMapButton *carte;

    // Score, Temps restant, coups joués
    wxStaticText *score;
    wxStaticText *tpsRestant;
    wxStaticText *cpsJoues;
    // Timer
    wxTimer *chrono;

    // Timer pour compter 1 seconde
    wxTimer *seconde;

    // Bouton démarrer/abandonner
    wxButton *demarrerAbandonner;

    //Les autres sizers
    wxSizer *interface;
    wxSizer *toutLeJeu;

public:
    Memory(const wxString& title);
    virtual ~Memory();
    void quitterMemory(wxCloseEvent& evt);

    void buttonDemarrerAbandonnerClick(wxCommandEvent& evt);

    void retournerCarte(wxCommandEvent& evt);

    void timer(wxTimerEvent& evt)

    void timer1seconde(wxTimerEvent& evt)


    DECLARE_EVENT_TABLE()
};



#endif


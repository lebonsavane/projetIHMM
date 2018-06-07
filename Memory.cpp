#include "Memory.h"

BEGIN_EVENT_TABLE(Principale, wxFrame)
    EVT_CLOSE(Principale::onClose)
    EVT_BUTTON (wxID_ANY, MemoryPrincipale::demarrerPartie)
    EVT_BUTTON (wxID_ANY, MemoryPrincipale::abandonnerPartie)
    EVT_TIMER(TIMER_ID, MemoryPrincipale::OnTimer)


END_EVENT_TABLE()

PrincipaleMemory::PrincipaleMemory()
                 :m_timer(this, TIMER_ID)
{
    m_timer.Start(1000);
}
void PrincipaleMemory::terminerPartieTempsRestantEcoule(wxTimerEvent& event)
{
    if (m_timer=0)
    {
     int temps0 = wxMessageBox( wxT ("Temps écoulé, fin du jeu"), wxT("PERDU :(("), wxOK, this);
     etatJeu= 'finTemps'



    }

void PrincipaleMemory::terminerPartieCarteRassembler()
{

}
}

}
Memory::~Memory()
{
    //dtor
}

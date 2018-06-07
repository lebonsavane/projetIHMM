




 enum UnEtatJeu {DJ='demarrerJeu',AT1='attente1', AT2='attente2', CRET='carteRetournees',GAG= 'gagnee', ABD='abandonnee',MDT='manqueDeTemps'};

class MemoryPrincipale : public wxFrame
{
public:
    Memory();
    virtual ~Memory();
    int getTempsMaxAlloue();
    int getTempsRestant();
    void setEtat (UnEtatJeu etat);
    void setTempsMaxAlloue (int tpsM);
    void setTempsRestant (int tpsR);
    Plateau* etLePlateau();
    int getNbCarteUtilisees();
    void setNbCartesUtilisees (Carte* carte);
    bool evaluerCartesSelectionnees();
    void demarrerPartie();
    void abandonnerPartie();
    void terminerPartieTempsRestantEcoule();
    void terminerPartieCarteRassembler();

protected:
    UnEtatJeu m_etatJeu;
    int m_tempsMaxAlloue;
    int m_tempsRestant;
    int m_nbCarteARassembler;
    int m_nbCartesUtilisees;
    int m_nbPairesTrouvees;
    int m_nbCoupsJoues;

private:
    wxStaticText* pairesTrouvees;
    wxStaticText* coupsJoue;
    wxStaticText* TempsRestant;
    wxStaticText* labelPairesTrouvees ;
    wxStaticText* labelCoupsJoue ;
    wxStaticText* labelTempsRestant;
    wxButton* demarrer ;
    wxButton* abandonner ;


    wxBoxSizer* sizerBouton;
    wxGridSizer* gridSizer
    wxBoxSizer* totalSizer;

    wxBitmapButton* boutonACliquer1;
    wxBitmapButton* boutonACliquer2;
    wxBitmapButton* boutonACliquer3;
    wxBitmapButton* boutonACliquer4;
    wxBitmapButton* boutonACliquer5;
    wxBitmapButton* boutonACliquer6;
    wxBitmapButton* boutonACliquer7;
    wxBitmapButton* boutonACliquer8;
    wxBitmapButton* boutonACliquer9;
    wxBitmapButton* boutonACliquer10;
    wxBitmapButton* boutonACliquer11;
    wxBitmapButton* boutonACliquer12;
    wxBitmapButton* boutonACliquer13;
    wxBitmapButton* boutonACliquer14;
    wxBitmapButton* boutonACliquer15;
    wxBitmapButton* boutonACliquer16;


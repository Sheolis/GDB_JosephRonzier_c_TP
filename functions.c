#include "game.h"

void add_destination(destinations_s *destinations, lieu_s* lieu)
{
    destinations->liste_lieux = realloc(destinations->liste_lieux, (destinations->size + 1) * sizeof(lieu_s **));
    destinations->liste_lieux[destinations->size] = lieu;
    destinations->size++;
}

void voyage(joueur_s *joueur)
{
    aff_lieux_proches(joueur->position);
    printf("Endurance : %d\n", joueur->endurance);
    char* position_tmp = joueur->position->nom;
    while (strcmp(position_tmp,joueur->position->nom)==0)
    {
      choix_destination(joueur->position);
    }


}

void choix_destination(lieu_s *position)
{
  char choix[200];
  int a;
  printf("Ou aller ?\n");
  scanf("%[^\n]", &choix);

  for (int i=0; i<position->lieux_proches.size; i++)
  {
      if(strcmp(choix, position->lieux_proches.liste_lieux[i]->nom)==0)
      {
          position = position->lieux_proches.liste_lieux[i];
          printf("%s\n", position->nom);
          return;
      }
  }
  printf("Cette destination est indisponnible\n");
}

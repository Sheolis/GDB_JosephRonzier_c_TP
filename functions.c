#include "game.h"

void add_destination(destinations_s *destinations, lieu_s *lieu)
{
  destinations->liste_lieux = realloc(destinations->liste_lieux, (destinations->size + 1) * sizeof(lieu_s));
  destinations->liste_lieux[destinations->size] = lieu;
  destinations->size++;
}

#ifndef __GAME_H_
#define __GAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum ouinon ouinon_e;

typedef struct destinations destinations_s;
typedef struct lieu lieu_s;
typedef struct joueur joueur_s;

void add_destination(destinations_s *destinations, lieu_s *lieu);

enum ouinon {OUI=1, NON=0};

struct destinations
{
  int size;
  lieu_s **liste_lieux;
};

struct lieu
{
  char *nom;
  char *description;
  int diff;
  destinations_s lieux_proches;
  ouinon_e avant_poste;
};

struct joueur_s
{
  int endurance;
  lieu_s *position;
};

#endif

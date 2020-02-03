#include "game.h"

int main()
{
  lieu_s plaines={"Les plaines à trous", "Vous parcourez de grandes étendues d'herbes hautes verdoyante. Les lieux sont parsemé de \"trous\" d'eau peuplés par de nombreuses créatures amphibies.",9,{NULL},0};
  lieu_s village={"Village des seaux", "Ce petit village d'une cinquataine d'habitant est bien calme. Les gens sont avenants et on comprend tout de suite d'où le nom des lieux viens aux nombreux seaux stockés près de multiples puits. A moins que les décombres de l'ancien chateau des templiers ne cache une tout autre signification ...", 3, {NULL}, 0};
  lieu_s ville={"Ville d'Eckaterea", "Les hautes tours de cette ville portuaire sont visibles de loin. Arrivé dans l'enceinte, le ton militaire visible depuis la terre laisse rapidement place à une ambiance effervescente typique des grands ports de commerce", 1, {NULL}, 0};
  lieu_s mont={"Mont chantants", "Ces montagnes sortent brutalement des plaines à trous. Leur paroies sont très abruptes. Pour y évoluer il faut se glisser parmis de nombreux passages très étroits où le vent passe avec force, fredonnant de sombre mélodies.", 19, {NULL}, 0};
  lieu_s grotte={"La Grotte du Vieux", "Alors que vous transpirez fortement, accroché à votre grappin, vous apercevez un peu plus loin un renfoncement dans la paroie. Vous penetrez une grotte à l'abri du vent. Vos oreilles n'étant plus assaillies par le bruit incessant du vent, vous distinguez parmis le calme des lieu un crépitement d'un feu et le murmure d'un vieillard", 1, {NULL}, 0};

  add_destination( &plaines.lieux_proches, &village);
  printf("%s\n",plaines.lieux_proches.liste_lieux[0]->nom);

  return 0;
}

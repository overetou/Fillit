Sommaire de projet :

I - check.
ok/Omega. Argc != 2 ? Afficher l’usage.
A.Bon compte de retour a la ligne en fonction des blocs qui sont entres, et bonne proportion de bloc.
B.Pas de caractère indesiré et presence de tetriminos valides.
C.Nom de fichier valide ?
check la validite de l'ensemble de la map () utilite si place l e fait deja ? / sous fonction de place ?
II-Traitement
Fonctions :
-int Find triomino(**t_trio, ltr) : renvois le pointeur sur lemaillon de la liste correspondant a la lettre cherche 
-char **Place(char **map, t_trio *trio, t_point target) : test si on peut placer un tetr et le fait si possible. 
-char **map_create(size) creer une nouvele map vierge
-void map_del(***map) free une ancienne map

III-affichage
void map_display(char **map)affiche la map

Avant de rendre : combien de fichiers auteurs et ou les placer ? Agencement des fichiers ?

map [x][y]
 y->
  _____
x|
 |
 |
 |

Verifs avant de push : bien relire toutes les consignes, securiser chaque malloc et free toute memoire alouee

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
char mot[100]; // D�clare une cha�ne de caract�res pour stocker le mot
printf("Entrer un mot: "); // Demande � l'utilisateur de saisir un mot
gets(mot); // Lit le mot saisi par l'utilisateur
printf("Le r�sultat est %u \n", strlen(mot));
// Affiche la longueur du mot saisi en utilisant la fonction strlen() de la biblioth�que string.h
// %u est le format de sp�cificateur pour unsigned int
system("PAUSE");
// Met en pause l'ex�cution pour que l'utilisateur puisse voir le r�sultat avant que la console ne se ferme
return 0; // Termine le programme avec succ�s
}

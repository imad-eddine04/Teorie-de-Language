#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
char mot[100]; // Déclare une chaîne de caractères pour stocker le mot
printf("Entrer un mot: "); // Demande à l'utilisateur de saisir un mot
gets(mot); // Lit le mot saisi par l'utilisateur
printf("Le résultat est %u \n", strlen(mot));
// Affiche la longueur du mot saisi en utilisant la fonction strlen() de la bibliothèque string.h
// %u est le format de spécificateur pour unsigned int
system("PAUSE");
// Met en pause l'exécution pour que l'utilisateur puisse voir le résultat avant que la console ne se ferme
return 0; // Termine le programme avec succès
}

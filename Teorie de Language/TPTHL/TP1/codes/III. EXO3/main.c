#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
char mot[100]; // Déclare un tableau de caractères pour stocker le mot saisi par l'utilisateur
printf("Entrer un mot: "); // Invite l'utilisateur à saisir un mot
gets(mot); // Lit le mot saisi par l'utilisateur
int n = strlen(mot); // Calcule la longueur du mot
// Parcourt le mot de la fin vers le début et affiche chaque caractère
for (int i = 0; i < n; i++)
printf("%c", mot[n - i - 1]);
printf("\n"); // Affiche une nouvelle ligne
system("PAUSE"); // Met en pause le programme (peut ne pas fonctionner sur tous les systèmes)
return 0;
}

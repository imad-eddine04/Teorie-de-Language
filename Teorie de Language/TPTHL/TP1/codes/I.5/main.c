#include <stdio.h>
#include <string.h>
int main() {
char mot[100]; // Déclare une chaîne de caractères pour stocker le mot saisi par l'utilisateur
// Demande à l'utilisateur de saisir un mot
printf("Entrez un mot : ");
// Utilisation de fgets pour lire l'entrée de manière sécurisée et éviter les débordements de tampon
fgets(mot, sizeof(mot), stdin);
// Supprime le caractère de nouvelle ligne (\n) ajouté par fgets s'il est présent
if (strlen(mot) > 0 && mot[strlen(mot) - 1] == '\n') {
mot[strlen(mot) - 1] = '\0';
}
// Vérifie si le mot commence et se termine par 'a'
if (mot[0] == 'a' && mot[strlen(mot) - 1] == 'a') {
printf("Le mot appartient au langage L1.\n");
} else {
printf("Le mot n'appartient pas au langage L1.\n");
}
return 0;
}

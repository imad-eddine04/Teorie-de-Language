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
int nb_a = 0; // Variable pour stocker le nombre de 'a' dans le mot
int nb_b = 0; // Variable pour stocker le nombre de 'b' dans le mot
// Parcourt chaque caractère du mot pour compter les 'a' et les 'b'
for (int i = 0; mot[i] != '\0'; i++) {
if (mot[i] == 'a') {
nb_a++; // Incrémente le compteur si le caractère est 'a'
} else if (mot[i] == 'b') {
nb_b++; // Incrémente le compteur si le caractère est 'b'
}
}
// Vérifie si le nombre de 'a' est égal au nombre de 'b'
if (nb_a == nb_b) {
printf("Le mot appartient au langage L.\n");
} else {
printf("Le mot n'appartient pas au langage L.\n");
}
return 0;
}

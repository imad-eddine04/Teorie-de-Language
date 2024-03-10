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
int nb_b = 0; // Variable pour stocker le nombre de 'b' dans le mot
int nb_a = 0; // Variable pour stocker le nombre de 'a' dans le mot
// Parcourt chaque caractère du mot pour compter les 'b' et les 'a'
for (int i = 0; mot[i] != '\0'; i++) {
if (mot[i] == 'b') {
nb_b++; // Incrémente le compteur si le caractère est 'b'
} else if (mot[i] == 'a') {
nb_a++; // Incrémente le compteur si le caractère est 'a'
}
}
// Affiche le nombre de 'b' et de 'a' dans le mot
printf("Nombre de 'b' : %d\n", nb_b);
printf("Nombre de 'a' : %d\n", nb_a);
return 0;
}

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
int i = 0;
int nb_a = 0;
int nb_b = 0;
// Compte le nombre de 'a' dans le mot
while (mot[i] == 'a') {
nb_a++;
i++;
}
// Compte le nombre de 'b' dans le mot
while (mot[i] == 'b') {
nb_b++;
i++;
}
// Vérifie si nous avons atteint la fin du mot et si le nombre de 'a' est égal au nombre de 'b'
if (mot[i] == '\0' && nb_a > 0 && nb_b > 0 && nb_a == nb_b) {
printf("Le mot appartient au langage L4.\n");
} else {
printf("Le mot n'appartient pas au langage L4.\n");
}
return 0;
}

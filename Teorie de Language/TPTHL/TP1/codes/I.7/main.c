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
// Parcours le mot jusqu'à ce que 'a' soit trouvé
while (mot[i] == 'a') {
i++;
}
// Continue à parcourir le mot jusqu'à ce que 'b' soit trouvé
while (mot[i] == 'b') {
i++;
}
// Vérifie si nous avons atteint la fin du mot
if (mot[i] == '\0') {
printf("Le mot appartient au langage L3.\n");
} else {
printf("Le mot n'appartient pas au langage L3.\n");
}
return 0;
}

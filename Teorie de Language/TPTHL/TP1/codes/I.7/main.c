#include <stdio.h>
#include <string.h>
int main() {
char mot[100]; // D�clare une cha�ne de caract�res pour stocker le mot saisi par l'utilisateur
// Demande � l'utilisateur de saisir un mot
printf("Entrez un mot : ");
// Utilisation de fgets pour lire l'entr�e de mani�re s�curis�e et �viter les d�bordements de tampon
fgets(mot, sizeof(mot), stdin);
// Supprime le caract�re de nouvelle ligne (\n) ajout� par fgets s'il est pr�sent
if (strlen(mot) > 0 && mot[strlen(mot) - 1] == '\n') {
mot[strlen(mot) - 1] = '\0';
}
int i = 0;
// Parcours le mot jusqu'� ce que 'a' soit trouv�
while (mot[i] == 'a') {
i++;
}
// Continue � parcourir le mot jusqu'� ce que 'b' soit trouv�
while (mot[i] == 'b') {
i++;
}
// V�rifie si nous avons atteint la fin du mot
if (mot[i] == '\0') {
printf("Le mot appartient au langage L3.\n");
} else {
printf("Le mot n'appartient pas au langage L3.\n");
}
return 0;
}

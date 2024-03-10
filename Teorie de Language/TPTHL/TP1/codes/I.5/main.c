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
// V�rifie si le mot commence et se termine par 'a'
if (mot[0] == 'a' && mot[strlen(mot) - 1] == 'a') {
printf("Le mot appartient au langage L1.\n");
} else {
printf("Le mot n'appartient pas au langage L1.\n");
}
return 0;
}

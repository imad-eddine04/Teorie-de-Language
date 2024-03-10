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
// V�rifie si nous avons atteint la fin du mot et si le nombre de 'a' est �gal au nombre de 'b'
if (mot[i] == '\0' && nb_a > 0 && nb_b > 0 && nb_a == nb_b) {
printf("Le mot appartient au langage L4.\n");
} else {
printf("Le mot n'appartient pas au langage L4.\n");
}
return 0;
}

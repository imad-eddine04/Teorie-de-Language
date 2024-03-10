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
int nb_a = 0; // Variable pour stocker le nombre de 'a' dans le mot
int nb_b = 0; // Variable pour stocker le nombre de 'b' dans le mot
// Parcourt chaque caract�re du mot pour compter les 'a' et les 'b'
for (int i = 0; mot[i] != '\0'; i++) {
if (mot[i] == 'a') {
nb_a++; // Incr�mente le compteur si le caract�re est 'a'
} else if (mot[i] == 'b') {
nb_b++; // Incr�mente le compteur si le caract�re est 'b'
}
}
// V�rifie si le nombre de 'a' est �gal au nombre de 'b'
if (nb_a == nb_b) {
printf("Le mot appartient au langage L.\n");
} else {
printf("Le mot n'appartient pas au langage L.\n");
}
return 0;
}

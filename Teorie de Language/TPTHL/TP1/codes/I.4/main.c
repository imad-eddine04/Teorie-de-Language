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
int nb_b = 0; // Variable pour stocker le nombre de 'b' dans le mot
int nb_a = 0; // Variable pour stocker le nombre de 'a' dans le mot
// Parcourt chaque caract�re du mot pour compter les 'b' et les 'a'
for (int i = 0; mot[i] != '\0'; i++) {
if (mot[i] == 'b') {
nb_b++; // Incr�mente le compteur si le caract�re est 'b'
} else if (mot[i] == 'a') {
nb_a++; // Incr�mente le compteur si le caract�re est 'a'
}
}
// Affiche le nombre de 'b' et de 'a' dans le mot
printf("Nombre de 'b' : %d\n", nb_b);
printf("Nombre de 'a' : %d\n", nb_a);
return 0;
}

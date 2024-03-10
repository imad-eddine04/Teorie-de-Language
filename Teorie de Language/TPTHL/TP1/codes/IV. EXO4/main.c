#include <stdio.h>
#include <string.h>
int main() {
char mot1[100], mot2[100];
// Demande à l'utilisateur d'entrer le premier mot
printf("Entrez le premier mot : ");
fgets(mot1, sizeof(mot1), stdin);
if (strlen(mot1) > 0 && mot1[strlen(mot1) - 1] == '\n') {
mot1[strlen(mot1) - 1] = '\0'; // Supprime le caractère de nouvelle ligne
}
// Demande à l'utilisateur d'entrer le deuxième mot
printf("Entrez le deuxième mot : ");
fgets(mot2, sizeof(mot2), stdin);
if (strlen(mot2) > 0 && mot2[strlen(mot2) - 1] == '\n') {
mot2[strlen(mot2) - 1] = '\0'; // Supprime le caractère de nouvelle ligne
}
// Concatène les deux mots et affiche le résultat
strcat(mot1, mot2);
printf("La concaténation des deux mots est : %s\n", mot1);
return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
char mot1[100], mot2[100];
// Demande � l'utilisateur d'entrer le premier mot
printf("Entrez le premier mot : ");
fgets(mot1, sizeof(mot1), stdin);
if (strlen(mot1) > 0 && mot1[strlen(mot1) - 1] == '\n') {
mot1[strlen(mot1) - 1] = '\0'; // Supprime le caract�re de nouvelle ligne
}
// Demande � l'utilisateur d'entrer le deuxi�me mot
printf("Entrez le deuxi�me mot : ");
fgets(mot2, sizeof(mot2), stdin);
if (strlen(mot2) > 0 && mot2[strlen(mot2) - 1] == '\n') {
mot2[strlen(mot2) - 1] = '\0'; // Supprime le caract�re de nouvelle ligne
}
// Concat�ne les deux mots et affiche le r�sultat
strcat(mot1, mot2);
printf("La concat�nation des deux mots est : %s\n", mot1);
return 0;
}

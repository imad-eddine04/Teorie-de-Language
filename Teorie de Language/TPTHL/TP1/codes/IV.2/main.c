#include <stdio.h>
#include <string.h>
int main() {
char mot[100];
// Demande � l'utilisateur d'entrer un mot
printf("Entrez un mot : ");
fgets(mot, sizeof(mot), stdin);
if (strlen(mot) > 0 && mot[strlen(mot) - 1] == '\n') {
mot[strlen(mot) - 1] = '\0'; // Supprime le caract�re de nouvelle ligne
}
// Affiche tous les pr�fixes propres du mot
printf("Les pr�fixes propres du mot sont :\n");
for (int i = 0; i < strlen(mot); i++) {
printf("%.*s\n", i, mot); // Utilise le format %.*s pour afficher les premiers i caract�res du mot
}
return 0;
}

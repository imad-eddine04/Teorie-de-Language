#include <stdio.h>
#include <string.h>
int main() {
char mot[100];
// Demande à l'utilisateur d'entrer un mot
printf("Entrez un mot : ");
fgets(mot, sizeof(mot), stdin);
if (strlen(mot) > 0 && mot[strlen(mot) - 1] == '\n') {
mot[strlen(mot) - 1] = '\0'; // Supprime le caractère de nouvelle ligne
}
// Affiche tous les suffixes propres du mot
printf("Les suffixes propres du mot sont :\n");
for (int i = 0; i < strlen(mot); i++) {
printf("%s\n", &mot[i]); // Affiche le suffixe à partir de la position i
}
return 0;
}

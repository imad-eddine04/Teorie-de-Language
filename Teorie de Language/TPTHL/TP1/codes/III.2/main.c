#include <stdio.h>
#include <string.h>
int main() {
char mot[100]; // D�clare un tableau de caract�res pour stocker le mot saisi par l'utilisateur
printf("Entrez un mot : "); // Invite l'utilisateur � saisir un mot
fgets(mot, sizeof(mot), stdin); // Lit le mot saisi par l'utilisateur
// Supprime le caract�re de nouvelle ligne (\n) ajout� par fgets s'il est pr�sent
if (strlen(mot) > 0 && mot[strlen(mot) - 1] == '\n') {
mot[strlen(mot) - 1] = '\0';
}
int longueur = strlen(mot);
int estPalindrome = 1; // Variable pour indiquer si le mot est un palindrome
// Parcourt le mot jusqu'� la moiti� de sa longueur
for (int i = 0; i < longueur / 2; i++) {
// Compare les caract�res du d�but et de la fin du mot
if (mot[i] != mot[longueur - i - 1]) {
estPalindrome = 0; // Si les caract�res sont diff�rents, le mot n'est pas un palindrome
break;
}
}
// Affiche le r�sultat
if (estPalindrome) {
printf("Le mot est un palindrome.\n");
} else {
printf("Le mot n'est pas un palindrome.\n");
}
return 0;
}

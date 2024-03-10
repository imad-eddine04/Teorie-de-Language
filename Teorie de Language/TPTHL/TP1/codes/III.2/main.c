#include <stdio.h>
#include <string.h>
int main() {
char mot[100]; // Déclare un tableau de caractères pour stocker le mot saisi par l'utilisateur
printf("Entrez un mot : "); // Invite l'utilisateur à saisir un mot
fgets(mot, sizeof(mot), stdin); // Lit le mot saisi par l'utilisateur
// Supprime le caractère de nouvelle ligne (\n) ajouté par fgets s'il est présent
if (strlen(mot) > 0 && mot[strlen(mot) - 1] == '\n') {
mot[strlen(mot) - 1] = '\0';
}
int longueur = strlen(mot);
int estPalindrome = 1; // Variable pour indiquer si le mot est un palindrome
// Parcourt le mot jusqu'à la moitié de sa longueur
for (int i = 0; i < longueur / 2; i++) {
// Compare les caractères du début et de la fin du mot
if (mot[i] != mot[longueur - i - 1]) {
estPalindrome = 0; // Si les caractères sont différents, le mot n'est pas un palindrome
break;
}
}
// Affiche le résultat
if (estPalindrome) {
printf("Le mot est un palindrome.\n");
} else {
printf("Le mot n'est pas un palindrome.\n");
}
return 0;
}

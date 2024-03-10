#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LINES 5
#define MAX_LENGTH 100
int main() {
char texte[MAX_LINES][MAX_LENGTH]; // Tableau pour stocker le texte
char mot[MAX_LENGTH]; // Variable pour stocker chaque mot temporairement
int majuscules = 0, minuscules = 0, speciaux = 0;
int mots_total = 0, mots_longueur_4 = 0, mots_contenant_en = 0,
mots_terminant_ent = 0;
// Saisie du texte ligne par ligne
printf("Entrez le texte (minimum 5 lignes):\n");
for (int i = 0; i < MAX_LINES; i++) {
fgets(texte[i], sizeof(texte[i]), stdin);
}
// Parcours du texte ligne par ligne
for (int i = 0; i < MAX_LINES; i++) {
char *token = strtok(texte[i], " \n"); // Tokenisation du texte en mots
// Parcours des mots dans chaque ligne
while (token != NULL) {
mots_total++; // Incrémente le nombre total de mots
// Comptage des caractères majuscules, minuscules et spéciaux dans le mot35

for (int j = 0; j < strlen(token); j++) {
if (isupper(token[j]))
majuscules++;
else if (islower(token[j]))
minuscules++;
else
speciaux++;
}
// Vérification de la longueur du mot
if (strlen(token) == 4)
mots_longueur_4++;
// Vérification si le mot contient "en"
if (strstr(token, "en") != NULL)
mots_contenant_en++;
// Vérification si le mot se termine par "ent"
if (strlen(token) >= 3 && strcmp(&token[strlen(token) - 3],
"ent") == 0)
mots_terminant_ent++;
token = strtok(NULL, " \n"); // Passage au mot suivant
}
}
// Affichage des résultats
printf("\nNombre de mots : %d\n", mots_total);
printf("Nombre de caractères majuscules : %d\n", majuscules);
printf("Nombre de caractères minuscules : %d\n", minuscules);
printf("Nombre de caractères spéciaux : %d\n", speciaux);
printf("Mots de longueur égale à 4 : %d\n", mots_longueur_4);
printf("Mots contenant la chaine 'en' : %d\n", mots_contenant_en);
printf("Mots se terminant par 'ent' : %d\n", mots_terminant_ent);
return 0;
}

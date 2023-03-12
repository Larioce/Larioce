/*
** EPITECH PROJECT, 2023
** Larioce
** File description:
** main
*/

#include "../includes/morpion.h"


int gain(int scd_gate[6][7])
{
    ;
    return (14);
}

void init_game(players_t players[2])
{
    printf("Nom du joueur 1: ");
    scanf("%s", &players[0].player);
    printf("Nom du joueur 2: ");
    scanf("%s", &players[1].player);
}

int saisie_donnee(players_t players[2], int jr)
{
    int val = 96;

    while (1) {
        printf("%s vous voulez jouer quelle colonne ? : ", players[jr].player);
        scanf("%d", &val);
        if (val >= 0 && val <= 6) break;
        printf("Le numéro de colonne choisit ne peut etre inférieur à 0 ou supérieur à 6\n");
    }
    return (val);

}

void engine(players_t players[2], list_t *gate, int scd_gate[6][7], int *rnd_player, int *lines)
{
    int correct = 0;

    while (correct == 0) {
        int col = saisie_donnee(players, *rnd_player);
        if ((scd_gate)[*lines][col] > 0) {
            printf("colonne occupée ! \n");
        } else {
            printf("col = %d\n", col);
            (scd_gate)[*lines][col] = players[*rnd_player].morpion;
            elt_t *current = gate->last;
            for (int tmp = 5; current != NULL && tmp != *lines; current = current->prev, tmp--);
            for (int c = 0; c <= 6; c++) {
                scd_gate[*lines][c] > 0 ? (current->lines[c] = scd_gate[*lines][c]) : 0;
            }
            correct = 1;
        }
    }
    if (!gain((scd_gate))) {

        exit (0);
    }
    for (int m = 0; m <= 6; m++)
        ((scd_gate)[*lines][m] == 0) ? (correct = 58) : 0;
    correct == 58 ? 0 : (*lines -= 1);
    *lines == 0 ? (write(2, "La grille est pleine, macth nul !\n", 34), disp_list(gate), my_free_list(gate), exit(84)) : 0;
    *rnd_player == 0 ? (*rnd_player = 1) : (*rnd_player = 0);
    return;
}

int main(int ac, char **av)
{
    players_t players[2];
    list_t *gate = NULL; //Voici la liste chainée
    int scd_gate[6][7] = {0};
    srand(time(NULL));
    int rnd_player = (rand() % 2) == 1 ? 0 : 1;//(cette opération c'est pour rendre aléatoire le premier joueur)
    int lines = 5;
    char X_or_O[10] = {0};

    for (int i = 0; i < 5; gate = fill(gate, "-------"), i++); // Ici la liste chainéee est remplie C'est une grille 6 * 7. Je n'ai utilisé que des traits parce que c'était pas évident de dessiner la grille du pdf
    for (int l = 0; l <= 5; l++) for (int c = 0; c <= 6; scd_gate[l][c] = 0, c++);
    disp_list(gate);
    printf("\n");
    init_game(players);
    printf("Le joueur qui commence est : %s !\n", players[rnd_player].player);
    while (1) {
        printf("Quel est votre symbole : (O ou X) ? : ", players[rnd_player].player);
        scanf("%s", &X_or_O);
        if (X_or_O[0] == 'O' || X_or_O[0] == 'X') {
            X_or_O[0] == 'O' ?
            (players[rnd_player].morpion = 79, players[rnd_player == 0 ? 1 : 0].morpion = 88) :
            (players[rnd_player].morpion = 88, players[rnd_player == 0 ? 1 : 0].morpion = 79);
            break;
        }
    }
    while (gain(scd_gate) != 0) {
        disp_list(gate);
        printf("Symbole de %s: %c\nSymbole de %s: %c\n", players[rnd_player].player, players[rnd_player].morpion,
                                                        players[rnd_player == 0 ? 1 : 0].player, players[rnd_player == 0 ? 1 : 0].morpion);
        engine(players, gate, scd_gate, &rnd_player, &lines);
    }
    gate ? my_free_list(gate) : 0;
    return (0);
}
/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, 
<
Jean-Paul Saliba 100741759
Jalen Duggan 100713294
Liam Rea 100743012
Faisal Alsheet 100639174
>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "players.h"

 // Returns true if the player name matches one of the existing players
bool player_exists(player* players, int num_players, char* name)
{
    bool player_exists = false;
    for (int i = 0; i < num_players; i++) {
        if (players[i].name == name) {
            player_exists = true;
        }
        else {
            player_exists = false;

        }
    }
    return player_exists;
}

// Go through the list of players and update the score for the 
// player given their name
void update_score(player* players, int num_players, char* name, int score)
{
    for (int i = 0; i < num_players; i++) {
        if (players[i].name == name) {
            players[i].score = score;
        }
    }
}

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
#ifndef JEOPARDY_H_
#define JEOPARDY_H_

#define MAX_LEN 256

 // Processes the answer from the user containing what is or who is and tokenizes it to retrieve the answer.
extern void tokenize(char* input, char** tokens);

// Displays the game results for each player, their name and final score, ranked from first to last place
extern void display_results(player* players, int num_players);

#endif /* JEOPARDY_H_ */

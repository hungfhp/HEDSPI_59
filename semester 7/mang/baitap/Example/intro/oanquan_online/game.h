#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void print_board(int sock, int s[]);
int get_direct(int sock, int step);
int step_transform(int sock, int postion, int direct);
int check_step_true(int sock, int board[], int step, int side);
int get_list_step_true(int sock, int board[], int side, int *list_step);
int get_sum_units(int sock, int board[], int side);
int check_board_status(int sock, int board[]);
int get_final_score(int sock, int board[], int side, int score);
int is_quan(int sock, int postion);
int move_iter(int sock, int board[], int step, int print);

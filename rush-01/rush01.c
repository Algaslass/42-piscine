/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:25:37 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/27 10:28:52 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Value in each case //
int row1_1;
int row1_2;
int row1_3;
int row1_4;

int row2_1;
int row2_2;
int row2_3;
int row2_4;

int row3_1;
int row3_2;
int row3_3;
int row3_4;

int row4_1;
int row4_2;
int row4_3;
int row4_4;

int process(int col1up,int col2up,int col3up,int col4up,int col1down,int col2down,int col3down,int col4down,int row1left,int row2left,int row3left,int row4left,int row1right,int row2right,int row3right,int row4right)
{
    if(col1up == 1 ){
        row1_1 = 4;
    }else if( col1up == 2 ){
        row2_1 = 4;
    }else if (col1up == 4){
        row1_1 = 1;
        row2_1 = 2;
        row3_1 = 3;
        row4_1 = 4;
    }

    if(col2up == 1 ){
        row1_2 = 4;
    }else if( col2up == 2 ){
        row2_2 = 4;
    }else if (col2up == 4){
        row1_2 = 1;
        row2_2 = 2;
        row3_2 = 3;
        row4_2 = 4;
    }

    if(col3up == 1){
        row1_3 = 4;
    }else if( col3up == 2){
        row2_3 = 4;
    }else if (col3up == 4){
        row1_3 = 1;
        row2_3 = 2;
        row3_3 = 3;
        row4_3 = 4;
    }

    if(col4up == 1){
        row1_4 = 4;
    }else if( col4up == 2){
        row2_4 = 4;
    }else if (col4up == 4){
        row1_4 = 1;
        row2_4 = 2;
        row3_4 = 3;
        row4_4 = 4;
    }

    if(col1down == 1){
        row4_1 = 4;
    }else if( col1down == 2){
        row3_1 = 4;
    }else if (col1down == 4 ){
        row4_1 = 1;
        row3_1 = 2;
        row2_1 = 3;
        row1_1 = 4;
    }

    if(col2down == 1){
        row4_2 = 4;
    }else if( col2down == 2){
        row3_2 = 4;
    }else if (col2down == 4){
        row4_2 = 1;
        row3_2 = 2;
        row2_2 = 3;
        row1_2 = 4;
    }

    if(col3down == 1){
        row4_3 = 4;
    }else if( col3down == 2){
        row3_3 = 4;
    }else if (col3down == 4){
        row4_3 = 1;
        row3_3 = 2;
        row2_3 = 3;
        row1_3 = 4;
    }

    if(col4down == 1){
        row4_4 = 4;
    }else if( col4down == 2){
        row3_4 = 4;
    }else if (col4down == 4){
        row4_4 = 1;
        row3_4 = 2;
        row2_4 = 3;
        row1_4 = 4;
    }

    if(row1left == 1){
        row1_1 = 4;
    }else if( row1left == 2){
        row1_2 = 4;
    }else if (row1left == 4){
        row1_1 = 1;
        row1_2 = 2;
        row1_3 = 3;
        row1_4 = 4;
    }

    if(row2left == 1){
        row2_1 = 4;
    }else if( row2left == 2){
        row2_2 = 4;
    }else if (row2left == 4){
        row2_1 = 1;
        row2_2 = 2;
        row2_3 = 3;
        row2_4 = 4;
    }

    if(row3left == 1){
        row3_1 = 4;
    }else if( row3left == 2){
        row3_2 = 4;
    }else if (row3left == 4){
        row3_1 = 1;
        row3_2 = 2;
        row3_3 = 3;
        row3_4 = 4;
    }

    if(row4left == 1){
        row4_1 = 4;
    }else if( row4left == 2){
        row4_2 = 4;
    }else if (row4left == 4){
        row4_1 = 1;
        row4_2 = 2;
        row4_3 = 3;
        row4_4 = 4;
    }

    if(row1right == 1){
        row1_4 = 4;
    }else if( row1right == 2){
        row1_3 = 4;
    }else if (row1right == 4){
        row1_4 = 1;
        row1_3 = 2;
        row1_2 = 3;
        row1_1 = 4;
    }

    if(row2right == 1){
        row2_4 = 4;
    }else if( row2right == 2){
        row2_3 = 4;
    }else if (row2right == 4){
        row2_4 = 1;
        row2_3 = 2;
        row2_2 = 3;
        row2_1 = 4;
    }

    if(row3right == 1 ){
        row3_4 = 4;
    }else if( row3right == 2 ){
        row3_3 = 4;
    }else if (row3right == 4){
        row3_4 = 1;
        row3_3 = 2;
        row3_2 = 3;
        row3_1 = 4;
    }

    if(row4right == 1){
        row4_4 = 4;
    }else if( row4right == 2){
        row4_3 = 4;
    }else if (row4right == 4){
        row4_4 = 1;
        row4_3 = 2;
        row4_2 = 3;
        row4_1 = 4;
    }

    if(row1_1 != 4){
        row1_2 = row1_1+1;
    }else{
        row1_2 = 1;
    }

    if(row1_2 != 4){
        row1_3 = row1_2+1;
    }else{
        row1_3 = 1;
    }

    if(row1_3 != 4){
        row1_4 = row1_3+1;
    }else{
        row1_4 = 1;
    }

    ///////
    if(row2_1 != 4){
        row2_2 = row2_1+1;
    }else{
        row2_2 = 1;
    }

    if(row2_2 != 4){
        row2_3 = row2_2+1;
    }else{
        row2_3 = 1;
    }

    if(row2_3 != 4){
        row2_4 = row2_3+1;
    }else{
        row2_4 = 1;
    }

    ////////
    if(row3_1 != 4){
        row3_2 = row3_1+1;
    }else{
        row3_2 = 1;
    }

    if(row3_2 != 4){
        row3_3 = row3_2+1;
    }else{
        row3_3 = 1;
    }

    if(row3_3 != 4){
        row3_4 = row3_3+1;
    }else{
        row3_4 = 1;
    }

    ///////
    if(row4_1 != 4){
        row4_2 = row4_1+1;
    }else{
        row4_2 = 1;
    }

    if(row4_2 != 4){
        row4_3 = row4_2+1;
    }else{
        row4_3 = 1;
    }

    if(row4_3 != 4){
        row4_4 = row4_3+1;
    }else{
        row4_4 = 1;
    }

    //Matrice Draw
    int col1[]= {row1_1, row2_1, row3_1, row4_1};
    int col2[]= {row1_2, row2_2, row3_2, row4_2};
    int col3[]= {row1_3, row2_3, row3_3, row4_3};
    int col4[]= {row1_4, row2_4, row3_4, row4_4};

    int map[]= {col1, col2, col3, col4};
    return map;
}

int main()
{
    process(4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2);
    return 0;
}
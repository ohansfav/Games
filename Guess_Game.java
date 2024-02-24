/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package guess_game;

//gui would be added soon

import java.util.Scanner; //takes input with scanner..
import java.util.Random; // gives random numbers..

/**
 *
 * @author ohanu
 */
public class Guess_Game {
    public static void main(String[] args) {
    
        //int play;
     
        System.out.println("Hi, Welcome to my Guess Game\n");
        System.out.println("----------------GUESS THE NUMBER------------");
        System.out.println("----------------GUESS THE NUMBER------------");
        int play = 1;
        //play = 0;
        while(play == 1){
        System.out.println("----------------Choose Difficulty------------");
        System.out.println("--1 ------Easy---------");
        System.out.println("--2 ------Medium-------");
        System.out.println("--3 ------Hard---------");
        System.out.println("--4 ------Extreme------");
        System.out.println("input: "); 
        Scanner scanner = new Scanner(System.in);
            //input for difficulties 
                int guess = scanner.nextInt();
                if(guess == 1){
                    System.out.println("easy");
                    System.out.println("Guess the number 0 - 9");
                    System.out.println("input: "); 
                    int gue = scanner.nextInt();
                    System.out.println("you choose: "+gue);
                    //for cpu
                    Random random = new Random();
                    int randno = random.nextInt(8) + 1;
                    System.out.println("CPU choose: "+randno);
                        if(gue == randno){
                            System.out.println("correct");
                            System.out.println("want to play again?");
                            System.out.println("input: "); 
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no"); 
                            play = scanner.nextInt();
                            }
                        else{
                            System.out.println("incorrect");
                            System.out.println("want to play again?");
                            System.out.println("input: "); 
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            play = scanner.nextInt();
                        }
                        if( play == 1 ){
                            System.out.println("lets continue");
                                    }
                         else{
                            System.out.println("thanks for playing");
                            break;
                                }
                }
                else if(guess == 2){
                    System.out.println("medium");
                    System.out.println("Guess the number 0 - 19");
                    System.out.println("input: "); 
                    int gue = scanner.nextInt();
                    System.out.println("you choose: "+gue);
                    //for cpu
                    Random random = new Random();
                    int randno = random.nextInt(18) + 1;
                    System.out.println("CPU choose: "+randno);
                        if(gue == randno){
                            System.out.println("correct");
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            System.out.println("input: "); 
                            play = scanner.nextInt();
                            }
                        else{
                            System.out.println("incorrect");
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            System.out.println("input: "); 
                            play = scanner.nextInt();
                        }
                        if( play == 1 ){
                            System.out.println("lets continue");
                                    }
                         else{
                            System.out.println("thanks for playing");
                            break;
                                }
                }
                else if(guess == 3){
                    System.out.println("Hard");
                    System.out.println("Guess the number 0 - 29");
                    System.out.println("input: "); 
                    int gue = scanner.nextInt();
                    System.out.println("you choose: "+gue);
                    //for cpu
                    Random random = new Random();
                    int randno = random.nextInt(28) + 1;
                    System.out.println("CPU choose: "+randno);
                        if(gue == randno){
                            System.out.println("correct");
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            System.out.println("input: "); 
                            play = scanner.nextInt();
                            }
                        else{
                            System.out.println("incorrect");
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            System.out.println("input: "); 
                            play = scanner.nextInt();
                        }
                        if( play == 1 ){
                            System.out.println("lets continue");
                                    }
                         else{
                            System.out.println("thanks for playing");
                            break;
                                }
                }
                else if(guess == 4){
                    System.out.println("Extreme");
                    System.out.println("Guess the number 0 - 39");
                    System.out.println("input: "); 
                    int gue = scanner.nextInt();
                    System.out.println("you choose: "+gue);
                    //for cpu
                    Random random = new Random();
                    int randno = random.nextInt(38) + 1;
                    System.out.println("CPU choose: "+randno);
                        if(gue == randno){
                            System.out.println("correct");
                            System.out.println("want to play again");
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            System.out.println("input: "); 
                            play = scanner.nextInt();
                            }
                        else{
                            System.out.println("incorrect");
                            System.out.println("1 -- yes");
                            System.out.println("2 -- no");
                            System.out.println("input: "); 
                            play = scanner.nextInt();
                        }
                        if( play == 1 ){
                            System.out.println("lets continue");
                                    }
                         else{
                            System.out.println("thanks for playing");
                            break;
                                }
                }
                else{
                    System.out.println("Wrong input\nDo you wat to try again?");
                    System.out.println("1 -- yes");
                    System.out.println("2 -- no");
                    System.out.println("input: "); 
                    play = scanner.nextInt();
                }
                if( play == 1 ){
                            System.out.println("lets continue");
                                    }
                         else{
                            System.out.println("thanks for playing");
                            break;
                                }
                
               
        }      
            
    }
    
}

#ifndef GAMECONTROLLERCPP
#define GAMECONTROLLERCPP
#include "gameController.h"
#include <iostream>
#include<string>
#include <iomanip> 
using namespace std; 


      void gameController::displayMenu(){
 
  cout<<"Beat the AI! Be the first to all of the cards in your rack in ascending order!"<<endl; 
 
 
 
cout<<"Begin!"<<endl;
          
         
          
       
      }
       
      void gameController::playGame(){
            displayMenu();
           int human=0;
          gameDeck.shuffle();
          int playagain=0;
          int aiNum= 0; 
          int humannum=0;
          cout<<"Generating numbers to determine who will go first"<<endl;
          cout<<"If your number is higher you will get to start, if the other players number is higher they will get to start."<<endl;
          aiNum= rand() % 60;
          humannum= rand() % 60;
          if(humannum>aiNum){
              human=0;
          }
          else{
             human=1; 
          }
          
          while (playagain==0){
     //while loop for do you want to play again
    int game= 0;
          int hcard;
        // while(game==0){
      
         gameDeck.shuffle();
         deal_initial_hands();
         
         while(game==0){
        if ( human==0){
             print_top_to_bottom(humanRack, 10);
       cout<<"this is the discarded card"<<endl;
       gameDeck.display();
       int ask;
       cout<<"what would you like to do? Take card from deck or take a discarded card? "<<endl;
       cout<<"select d for deck or c for discard"<<endl;
       cin>>ask; 
       if(ask=='d'){
           cout<<"choose a card";
           int rancard;
           int cardtoo;
           cin>>rancard;
           cin>>cardtoo;
           findAndReplace(rancard, cardtoo ,humanRack, 10);
       }
       else if(ask== 'c'){
           
           cout<<"choose a card"<<endl;
           int rancard2;
           int cardto;
           cin>>rancard2;
           cin>>cardto;
           
           
           findAndReplace(rancard2, cardto , humanRack, 10);
       }
       
       
       
       //if d then find and replace discarded card with card in Rack
       //if c find and repace with random card, in the rack
       //can choose to replace the card or skip turn
       
 
        human++;
        }
        else{
            AITurn();
            human=0;
            
        }
        check_racko(AIRack, 10);
        check_racko(humanRack, 10);
       
        
       playagain++; 
    //
      }
      int again;
      cout<<"Would you like to play again? Y or N"<<endl;
      cin>>again;
      if(again=='n'){
          playagain=1;
      }
      else{
          playagain=0;
      }
      
          }
      }
       
      void gameController::AITurn(){
          
          
          
     
      }
       
      bool gameController::check_racko(int Rack[],const int SIZE){ 
          int count = 0;
          for(int i= 0; i<SIZE; i ++){
              
              if(Rack[i]>Rack[i+1]){
                  count++;
                 
              }
              else{
                  return false;
                  }
          }
          if (count ==10){
              return true;
          }
              
          
   
      }
 
      void gameController::deal_initial_hands(){ 
          
          for(int i=0; i<10; i++){

                humanRack[i]= gameDeck.dealCard();
                AIRack[i]=gameDeck.dealCard();
          }
     
      }
       
      void gameController::print_top_to_bottom(int Rack[],const int SIZE){
           
          for(int i=0; i<SIZE; i ++){
              cout<<Rack[i]<<endl;
              
          }
     
      }
     
      bool gameController::findAndReplace(int newCard,int cardToBeReplaced,int Rack[],const int SIZE){ 
            
          for(int i=0; i<SIZE; i++){
              if(Rack[i]==cardToBeReplaced){
                  cardToBeReplaced= newCard;
                  return true;
              }
              
           }
      }
          
   
   

#endif
#ifndef GAMECONTROLLERH
#define GAMECONTROLLERH
#include "deck.h"
#include <iostream>
#include<string>
#include <iomanip> 
using namespace std; 


class gameController{
 public:  
      void  displayMenu(); 
      
       
      void playGame(); 
     
       
      void AITurn(); 
    
       
      bool check_racko(int Rack[],const int SIZE); 
      
 
      void deal_initial_hands(); 
    
       
      void print_top_to_bottom(int Rack[],const int SIZE); 
      
     
      bool findAndReplace(int newCard,int cardToBeReplaced, int Rack[],const int SIZE); 
    
             
   private: 
      int humanRack[10]; 
      int AIRack[10]; 
      bool playing; 
      Deck gameDeck;     
      
}; 


#endif
#ifndef DECKH
#define DECKH
#include <iostream>
#include<string>
#include <iomanip> 
using namespace std; 

const int MAX_CARDS = 60;
class Deck
{ 
   public: 
     Deck(); 
      
       
      void shuffle(); 
  
 
      void display(); 
      
 
      int getDisCard(); 
      
      int dealCard();      
      
      void addCardToDiscard(int currentCard); 
      
   private:       
       
     int  drawPile[MAX_CARDS]; 
      int drawPileIndex; 
     int discardPile[MAX_CARDS]; 
      int discardPileIndex; 
};


#endif
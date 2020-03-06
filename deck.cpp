#ifndef DECKCPP
#define DECKCPP
#include "deck.h"
#include <iostream>
#include<string>
#include <iomanip> 
#include<ctime>
using namespace std; 


      Deck::Deck(){ 
          discardPileIndex= 0;
          drawPileIndex = 0;
          
        int num=1;
      for(int i=0; i<60; i++){
          drawPile[i]= i +1;
          //cout<<drawPile[i]<<endl;
      }
     
      }
       
      void Deck::shuffle(){
          int temp = 0;
          int random= 0;
          srand(time(NULL));
         // if(==60){
          for(int i = 0; i<60; i ++){
              random= rand() % 60;
temp=drawPile[i];
              drawPile[i]= drawPile[random];
             // drawPile[random];

drawPile[random]=temp;
              
            //  cout<<drawPile[i]<<endl;
          }
         
     
      }
 
      void Deck::display(){ 
         
         
          cout<<discardPile[discardPileIndex -1]<<endl;
        
        
  
      }
 
      int Deck::getDisCard(){ 
          
          
          return discardPile[discardPileIndex -1];
        
      }
       
      int Deck::dealCard(){ 
         
        int temp=0;
         temp = drawPile[0];
    for (int i=0; i<60; i++){
        
        drawPile[i]= drawPile[i+1];
        
          //drawPile[59]=temp;
 }
 drawPile[59]=temp;
 //temp = drawPile[0];
 return temp;
          
          
      }
       
      void Deck::addCardToDiscard(int currentCard){
          
        //items[size++]=newItem;
          
          discardPile[discardPileIndex]= currentCard;
         discardPileIndex++;
      } 
  





#endif
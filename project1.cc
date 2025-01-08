#include <iostream>

using namespace std;

const int
  NUM_RANKS = 13;

int main() {
  // variables
  int
  card1,
  card2,
  card3,
  card4,
  card5,
  rank1,
  rank2,
  rank3,
  rank4,
  rank5;

  // input five card numbers
  cout << "Enter card1:" << endl;
  cin >> card1;

  cout << "Enter card2:" << endl;
  cin  >> card2;

  cout << "Enter card3:" << endl;
  cin  >> card3;
 
  cout << "Enter card4:" << endl;
  cin  >> card4;

  cout << "Enter card5:" << endl;
  cin  >> card5;
  
  
  // calculate five rank numbers
   rank1 = card1 % 13;
   rank2 = card2 % 13;
   rank3 = card3 % 13;
   rank4 = card4 % 13;
   rank5 = card5 % 13;
    

  // check the order of the five cards
   if(rank1 > rank2 ||
      rank2 > rank3 ||
      rank3 > rank4 ||
      rank4 > rank5)

     { cout << "Cards are not in order" << endl;
       return 1;
     }
  // check for royal flush
   else if (rank1 == 8 &&
    card2 == card1 + 1 &&
    card3 == card2 + 1 &&
    card4 == card3 + 1 &&
    card5 == card4 + 1)

   cout << "Royal flush" << endl;



  // else, check for straight flush
    else if (rank1 < 8 &&
     card2 == card1 + 1 &&
     card3 == card2 + 1 &&
     card4 == card3 + 1 &&
     card5 == card4 + 1) 

    cout << "Straight flush" << endl;

  // else, check for four of a kind
    else if (rank1 == rank4 ||
     rank2 == rank5)

    cout << "Four of a kind" << endl;
  
  // else, check for full house
    else if  ((rank1 == rank3 &&
     rank4 == rank5) ||
     (rank1 == rank2 &&
     rank3 == rank5))
 
   cout << "Full house" << endl;



  // else, check for flush
    else if (card1 / 13 == card2 / 13 &&
     card2 / 13 == card3 / 13 &&
     card3 / 13 == card4 / 13 &&
     card4 / 13 == card5 / 13)

  cout << "Flush" << endl; 

  // else, check for straight
    else if(rank2 == rank1 + 1 &&
     rank3 == rank2 + 1 &&
     rank4 == rank3 + 1 &&
     rank5 == rank4 + 1)

   cout << "Straight" << endl; 
      

  // else, check for three of a kind
    else if(rank1 == rank3 ||
     rank2 == rank4 ||
     rank3 == rank5)

  cout << "Three of a kind" << endl;

  // else, check for two pair 
    else if((rank1 == rank2 &&
      rank3 == rank4) || 
     (rank1 == rank2 &&
      rank4 == rank5) ||
     (rank2 == rank3 &&
      rank4 == rank5))

  cout << "Two pair" << endl;

  // else, check for one pair
     else if(rank1 == rank2 ||
     rank2 == rank3 ||
     rank3 == rank4 ||
     rank4 == rank5)

  cout << "One pair" << endl;

  // else, you have nothing

    else 
  {
   cout << "Nothing" << endl;
  }
    
  
  // all done
  return 0; 
} 

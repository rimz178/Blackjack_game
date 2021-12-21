#include "player.h"

Player::Player(const string pName): UserName(pName) {

}

//t´This function set default name for player.
Player::Player() {

    UserName = "Dealer ";
}
//Empty class destrucror
Player::~Player() {

}


/* This function asks if the player wants more cards
 * and check if  the player or dealer is still
 * Dealer case if the card value is <= 16  then we continue giving cards.
*/
bool Player::isHittings() const {

    if (UserName !="Dealer ") {

        cout << endl<< UserName << "\n Do you want to hit one more card? (y/n) ";
        char response;
        cin >> response;
        return (response == 'y'|| response == 'Y');
    }
    else  {

        return (playerHand.GetHandTotal()<= 16);
    }
}

// This function set player name
void Player:: setPlayerName(string name) {

    UserName = name;
}
//This function get player name
string Player::getPlayerName() const{

    return UserName;
}

// This function check if hand is empty.
bool Player:: isEmpty() {

    return playerHand.HandIsEmpty();
}

// This function reset hand
void Player::clear() {

    playerHand.ClearHand();
}

// This function flip the dealer*´s first card
void Player::FlipDealerFirstCard() {

    if(!(playerHand.HandIsEmpty()))
        playerHand.FlipFirstCardI();
}
// This function add new card to player
void Player::ReceiveCard(Card playerCard) {

    playerHand.AddCardToHand(playerCard);
}

// This function check if player or dealer is lose.
bool Player::isBusted() const {

    return (playerHand.GetHandTotal() > 21);
}

// This function check card total
unsigned int Player::getCardTotal() const {

    return playerHand.GetHandTotal();
}

// This function check player's hand last position
unsigned int Player::getPosition() const {

    return playerHand.GetHandLastPosition();
}



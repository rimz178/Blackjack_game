#include "player.h"

Player::Player(const string pName): UserName(pName) {

}


Player::Player() {

    UserName = " Dealer ";
}

Player::~Player() {

}

string Player::getPlayerName() const{

    return UserName;
}



void Player:: setPlayerName(string name) {

    UserName = name;
}

bool Player:: isEmpty() {

    return playerHand.HandIsEmpty();
}


void Player::clear() {

    playerHand.ClearHand();
}

bool Player::isHitting() const {

    if (UserName !=" Dealer ") {

        cout << endl<< UserName << " Do you want to hit? (y/n)";

        char response;
        cin >> response;
        return (response == 'y'|| response == 'Y');
    }
    else  {

        return (playerHand.GetHandTotal()<= 16);
    }
}

void Player::FlipDealerFirstCard() {

    if(!(playerHand.HandIsEmpty()))
        playerHand.FlipFirstCardI();
}

void Player::ReceiveCard(Card playerCard)
{
    playerHand.AddCardToHand(playerCard);
}


bool Player::isBusted() const
{
    return (playerHand.GetHandTotal() > 21);
}


unsigned int Player::getCardTotal() const
{
    return playerHand.GetHandTotal();
}


unsigned int Player::getPosition() const
{
    return playerHand.GetHandLastPosition();
}
/*
string Player::getPlayerName() const {

    return UserName;

}

*/

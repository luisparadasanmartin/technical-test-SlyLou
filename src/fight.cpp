#include <iostream>
class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
};

std::string fight(Fighter player1, Fighter player2)
{
    while(true)
    {
        player2.setHealth(player2.getHealth() - player1.getDamagePerAttack()); //le joueur 1 donne un coup au joueur 2
        if (player2.getHealth() <= 0) //si le joueur 2 est KO retourne le nom du joueur 1
        {
            return player1.getName();
        }
        player1.setHealth(player1.getHealth() - player2.getDamagePerAttack()); //le joueur 2 donne un coup au joueur 1
        if (player1.getHealth() <= 0) //si le joueur 1 est KO retourne le nom du joueur 2
        {
            return player2.getName();
        }
    }
}

int main() {
    using namespace std;
    string player1_name;
    int player1_health;
    int player1_damage;
    cout << "Enter player1 name : ";
    cin >> player1_name;
    cout << "Enter player1 health : ";
    cin >> player1_health;
    cout << "Enter player1 damage per attack : ";
    cin >> player1_damage;

    string player2_name;
    int player2_health;
    int player2_damage;
    cout << "Enter player2 name : ";
    cin >> player2_name;
    cout << "Enter player2 health : ";
    cin >> player2_health;
    cout << "Enter player2 damage per attack : ";
    cin >> player2_damage;

    Fighter player1(player1_name, player1_health, player1_damage);
    Fighter player2(player2_name,player2_health,player2_damage);
    string winner = fight(player1,player2);
    cout<<winner;
    return 0;
}
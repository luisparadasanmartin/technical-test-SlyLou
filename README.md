Exercice 1 : carrés dans un rectangle

Le but de ce problème est de découper un vrai rectangle (le cas du carré est hors périmètre) en carrés de côté maximum.

Vous devez écrire une fonction squaresInRect qui prend deux paramètres :

length : un entier positif
width : un entier positif
Et qui retourne qui retourne une liste d'entiers, représentant le côté de chaque carré.

squaresInRect :: int -> int -> {int}

Exemples :

squaresInRect(5,3) devrait retourner {3,2,1,1}
squaresInRect(3,5) devrait retourner {3,2,1,1}
squaresInRect(5,1) devrait retourner {1,1,1,1,1}
squaresInRect(2,4) devrait retourner {2,2}
Note : le cas length == width est un cas différent, qui n'est pas à traiter ici. Dans ce cas, nous convenons de retourner une liste vide {}.

Exercice 2 : qui sera le gagnant ?

Le but de ce problème est d'écrire une fonction fight qui retourne le nom du gagnant dans un combat de deux joueurs :

Chaque joueur attaque l'autre à chaque tour. Celui qui met KO l'autre est le gagnant
Les attaques sont consécutive : le joueur 1 (1er paramètre) attaque le joueur 2 (second paramètre), et ainsi de suite jusqu'au KO d'un joueur
Un joueur est KO si health <= 0
Chaque joueur est une instance de Player
health et damagePerAttack sont des entiers positifs
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
figth :: Player -> Player -> std::string

Exercice 3 : dessiner un cube

Le but de ce problème est de coder une fonction drawCube qui dessine un cube de côté n passé en paramètre, en ASCII :

Pour n<=0 renvoyer un chaine vide
Les contours du cube sont #
La face avant du cube doit avoir le caractère ``
Les autres faces du cube doit avoir le caractère *
le cube doit se terminer par le caractère `\n``
Exemples :

n=1
#\n

n=2
 ##\n
###\n
##\n

n=3
  ###\n
 #*##\n
###*#\n
# ##\n
###\n

n=4
   ####\n
  #**##\n
 #**#*#\n
####**#\n
#  #*#\n
#  ##\n
####\n

n=5
    #####\n
   #***##\n
  #***#*#\n
 #***#**#\n
#####***#\n
#   #**#\n
#   #*#\n
#   ##\n
#####\n
drawCube :: int -> std::string

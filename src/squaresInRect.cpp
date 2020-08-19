#include <iostream>
#include <list>

std::list<int> squaresInRect(int length, int width);
int minusRect(int length, int width);
int maxRect(int length, int width);
void print(std::list<int> const &list);

std::list<int> listSquare;

int main(){
    using namespace std;
    int length, width;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    listSquare = squaresInRect(length,width);
    print(listSquare);
    return 0;
}

int minusRect(int length, int width){ //retourne le minimum entre la longueur et largeur du rectangle
    if(length < width){
        return length;
    }
    else {
        return width;
    }
}

int maxRect(int length, int width){ //retourne le maximum entre la longueur et largeur du rectangle
    if(length > width){
        return length;
    }
    else {
        return width;
    }
}

std::list<int> squaresInRect(int length, int width){
    using namespace std;

    if (length != width){ 
        int minus = minusRect(length, width);
        int max = maxRect(length, width);
        listSquare.push_back(minus); //on ajoute à la liste le minimum entre la longueur et largeur
        squaresInRect(minus, max - minus); //récursif sur le restant du rectangle
    }
    if(!listSquare.empty() && length == width){
        listSquare.push_back(length); //ajoute à la liste le dernier carré
    }
    return listSquare;
    
}

void print(std::list<int> const &list) //permet d'afficher la liste de côtés de chaque carré
{   
    if (list.empty()){
        std::cout << "Width = Length";
    }
    else {
        for (auto it = list.cbegin(); it != list.cend(); it++)
	    {
		std::cout << *it << '\n';
	    }
    }
}
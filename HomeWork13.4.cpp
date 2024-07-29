/*
* Я не смог понять как приспособить Character 
* для продвинутых типов соритровки (bubble, quick)
* поэтому сделал простой цикл (массив вряд ли будет большой)
* с проверкой, отсортирован ли массив
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Character {
private:

	string Name = "Defalut";
	int Score = 0;

public:

	void SetCharacter(string NewName, int NewScore) {
		Name = NewName;
		Score = NewScore;
	}

	string GetName() {
		return Name;
	}

	int GetScore() {
		return Score;
	}
};

bool isSorted(Character** arr, int n) //Проверка, отсортирован ли массив
{
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i]->GetScore() > arr[i + 1]->GetScore()) {
			return false;
		}
	}

	return true;
}


int main()
{
	cout << "Amount of players: ";
	int PlayersAmount;
	cin >> PlayersAmount;

	Character** players = new Character * [PlayersAmount];


	// Добавление игроков
	for (int i = 0; i < PlayersAmount; ++i) {
		cout << "\n Player number " << i+1 << "\n";
		players[i] = new Character();
		string CurrentPlayerName;
		int CurrentPlayerScore;

		cout << "\n Name: ";
		cin >> CurrentPlayerName;

		cout << "\n Score: ";
		cin >> CurrentPlayerScore;

		players[i]->SetCharacter(CurrentPlayerName, CurrentPlayerScore);
	}

	//Сортировка типа a = b, b = a пока массив не отсортируется
	while (isSorted(players,PlayersAmount) == false) {
		for (int j = 0; j < PlayersAmount - 1; j++) {
			if (players[j]->GetScore() > players[j + 1]->GetScore()) {

				Character* temp = players[j];
				players[j] = players[j + 1];
				players[j + 1] = temp;

			}
		}
	}
	
	// Вывод игроков в порядке возрастания счета
	for (int i = 0; i < PlayersAmount; i++) {
		cout << "\n" << players[i]->GetName() << " " << players[i]->GetScore() << "\n";
	}

}


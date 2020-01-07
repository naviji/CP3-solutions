#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>
#include <sstream>

using namespace std;

#define ll long long
#define ld long double
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii> 
#define pb push_back
const int INF = 1000000009;
const ld EPS = 10e-9;


struct Card {
	char rank;
	char suit;
};

int suitIndex(Card c) {
	if (c.suit == 'S')
		return 0;
	if (c.suit == 'H')
	       return 1;
	if (c.suit == 'D')
		return 2;
	if (c.suit == 'C')
		return 3;
}


char most_card_suit(vector<Card>& v) {
	vector<char> names{'S', 'H', 'D', 'C'};

	vi cards(4, 0);
	for (auto card : v)
		cards[suitIndex(card)]++;
/*
	for (int i=0; i<4; i++) {
		printf("%c has %d cards\n", names[i], cards[i]);
	}
*/

	int maxIndex = 0;
	for (int i=1; i<4; i++) {
		if (cards[i] > cards[maxIndex])
			maxIndex = i;
	}
	return names[maxIndex];
}

pair<int, int> points(vector<Card>& v) {
	int points = 0;

	vi cards(4, 0); // 0 S, 1 H, 2 D, 3 C
	vi kings(4, 0);
	vi queens(4, 0);
	vi jacks(4, 0);
	
	const int S = 0;
	const int H = 1;
	const int D = 2;
	const int C = 3;

	for (auto card: v) {
		if (card.rank == 'A')
			points += 4;
		else if (card.rank == 'K') {
			points += 3;
			kings[suitIndex(card)]++;
		}	
		else if (card.rank == 'Q') {
			points += 2;
			queens[suitIndex(card)]++;
		}
		else if (card.rank == 'J') {
			points += 1;
			jacks[suitIndex(card)]++;
		}

		cards[suitIndex(card)]++;
	}

	for (int i=0; i<4; i++) {
		if (kings[i]==1 && cards[i]==1)
			points -= 1;
		if (queens[i]==1 && (cards[i]<=2))
			points -= 1;
		if (jacks[i]==1 && (cards[i]<=3))
			points -= 1;
	}

	int no_trump_points = points;

	for (int i=0; i<4; i++) {
		if (cards[i] == 2)
			points++;
		if (cards[i] == 1)
			points += 2;
		if (cards[i] == 0)
			points += 2;
	}

	return {no_trump_points, points};
}

bool stopped(vector<Card>& v, char suit) {
	bool ace = false;
	bool king = false;
	bool queen = false;
	int count = 0;

	for (auto& card : v) {
		if (card.suit == suit) {
			if (card.rank == 'A')
				ace = true;
			else if (card.rank == 'K')
				king = true;
			else if (card.rank == 'Q')
				queen = true;
			count++;
		}
	}	
	
	return (ace || (king && (count>=2)) ||
		(queen && (count>=3)));
}

bool all_suits_stopped(vector<Card>& v) {
	vector<char> suit{'S', 'H', 'D', 'C'};
	for (char s : suit) {
		if (!stopped(v, s))
			return false;
	}
	return true;
}

int main() {
	string s;

	while (getline(cin, s), !s.empty()) {
		int cards = 13;
		vector<Card> v;
		stringstream ss(s);
		string str;
		while (cards--) {
			ss >> str;
			v.pb({str[0], str[1]});
		}
/*
		printf("Cards are: ");
		for (auto& c : v) {
			printf("%c%c ", c.rank, c.suit);
		}
		printf("\n");
*/

		pair<int, int> pts = points(v);
		int no_trump_points = pts.first;
		int pass_points = pts.second;
		
		if (pass_points<14) {
			printf("PASS\n");
		}
		else {
			if (no_trump_points>=16 &&
				all_suits_stopped(v)){
				printf("BID NO-TRUMP\n");
			}
			else {
				printf("BID %c\n", most_card_suit(v));
			}
		}
	}	
}


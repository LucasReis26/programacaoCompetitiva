#include <iostream>

using namespace std;

class Jogos{
private:
	int home, guest;
public:
	void inicializa(int home, int guest){
		this->home = home;
		this->guest = guest;
	}
	Jogos(){
		inicializa(0,0);
	}
	Jogos(int home, int guest){
		inicializa(home,guest);
	}
	int getHome(){
		return home;
	}
	int getGuest(){
		return guest;
	}
	void setHome(int home){
		this->home = home;
	}
	void setGuest(int guest){
		this->guest = guest;
	}
};

int contaIguais(Jogos* jogos,int n){
	int count = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j)
				if(jogos[i].getHome() == jogos[j].getGuest()) count++;
		}
	}

	return count;
}

int main(){
	int n;

	cin >> n;

	Jogos* jogos = new Jogos[n];

	for(int i = 0; i < n; i++){
		int home, guest;
		cin >> home >> guest;
		jogos[i].inicializa(home,guest);
	}


	cout << contaIguais(jogos,n);

	return 0;
}

#include <iostream>
using namespace std;

class CoffeeMachine {
		public:
			void virtual makeCoffee() {
				cout << "Making regular coffee." << endl;
			}
};

class PremCoffeeMachine : public CoffeeMachine {
		public:
			void makeCoffee() override {
				cout << "Making capuccino." << endl;
			}
};

void remoteControl(CoffeeMachine* cm) {
	cm->makeCoffee();
}

int main() {
	CoffeeMachine *cm = new CoffeeMachine();
	PremCoffeeMachine *pcm = new PremCoffeeMachine();
	
	remoteControl(cm);
	remoteControl(pcm);
	return 0;
}
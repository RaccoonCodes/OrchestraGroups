#include "OrchList.h"

using namespace std;

int Orchestra::getTotal() {
	return violins + violas + cellos;
}

 void Orchestra :: setViolins(int vio) {
	violins = vio;
}
 void Orchestra::setViolas(int via) {
	 violas = via;
}
 void Orchestra::setCellos(int cell) {
	 cellos = cell;
 }
 Orchestra Orchestra::operator+(const Orchestra& b) {
	 Orchestra orch;
	 orch.violins = this->violins + b.violins;
	 orch.violas = this->violas + b.violas;
	 orch.cellos = this->cellos + b.violas;
	 return orch;

 }
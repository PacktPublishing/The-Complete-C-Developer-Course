#ifndef ICE_CREAM_SUNDAE_H
#define ICE_CREAM_SUNDAE_H

#include <string>
#include <vector>
using namespace std;

class IceCreamSundae {
	public:
		IceCreamSundae(string flavor);
		void addTopping(string topping);
		string getFlavor() const;
		vector<string> getToppings() const;
		void printSundae() const;

	private:
		string flavor;
		vector<string> toppings;
};

#endif
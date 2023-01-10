#ifndef ORCHLIST_H
#define ORCHLIST_H

class Orchestra {

public:

	void setViolins(int vio);
	void setViolas(int via);
	void setCellos(int cell);
	int getTotal();
	Orchestra operator+(const Orchestra& b);

private:
	int cellos;
	int violins;
	int violas;
};


#endif // SHAPE_H

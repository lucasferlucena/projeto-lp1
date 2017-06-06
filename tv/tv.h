#ifndef TV_
#define TV_ value

class Tv{
private:
	int canal;
	int volume;

public:
	Tv(int, int);
	Tv();

	void setVolume(int);
	int getVolume(void);

	void setCanal(int);
	int getCanal(void);

	void aumentarCanal(void);
	void diminuirCanal(void);

	void aumentarVolume(void);
	void diminuirVolume(void);

	~Tv(){}
};

#endif
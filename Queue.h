class Queue {
	
private:
	int* data;
	int maxsize;
	int cursize;
	static const int initialSize = 20;

public:
	Queue();
	~Queue();

	bool dequeue();
	bool enqueue(int value);
	int getSize();
	int getNext();
	void display();

};



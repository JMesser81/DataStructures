template <class T> 
class GenericQueue
{
public:
	GenericQueue();
	~GenericQueue();

	void clear();
	bool isEmpty();
	void enqueue(T &input);
	T& dequeue();
	T first();

private:
   

};

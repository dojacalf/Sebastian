class node
{
private:
	int val;
	node *next;

public:
	node(int v)
	{
		val = v;
		next = nullptr;
	}
	node() {};
	node *getnext()
	{
		return next;
	}
	int getval()
	{
		return val;
	}
	void setnext(node *n)
	{
		next = n;
	}
};

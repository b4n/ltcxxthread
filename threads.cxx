#include <thread>
#include <iostream>

static void f(int n)
{
	std::cout << "hello, thread " << n << std::endl;
}

void threads_main()
{
	std::thread t1(f, 1);
	std::thread t2(f, 2);

	t1.join();
	t2.join();
}

#include <iostream>

template <typename T>
int compare(const T& v1, const T& v2)
{
	if(v1 < v2) return -1;
	if(v2 < v1) return 1;
	return 0;
}

int main(int argc, char *argv[])
{
	const char * ch1 = "abcdef";
	const char * ch2 = "ABCDEF";
	
	std::cout << compare(ch1, ch2) << std::endl;  // 结果错误 -1
	return 0;
}

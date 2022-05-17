

#pragma once

#ifdef MAPPER_EXPORTS
#define MAPPER_API __declspec(dllexport)
#else
#define MAPPER_API __declspec(dllimport)
#endif

class MAPPER_API Mapper {
public:
	explicit Mapper(int count = 0);
	void map(int k, std::string c, std::string dir);
	static bool test();
private:
	void exporter(std::vector<std::string> vect, std::string temp, int key);
};




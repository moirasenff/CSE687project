

#pragma once

#ifdef MAPPER_EXPORTS
#define MAPPER_API __declspec(dllexport)
#else
#define MAPPER_API __declspec(dllimport)
#endif

/* 
#ifdef MAPPER_HPP
#define MAPPER_HPP */

#include <vector>
#include <string>
/*
class Mapper
{
public:
	extern "C" MAPPER_API explicit Mapper(int count = 0);
	extern "C" MAPPER_API void map(int k, std::string c, std::string dir);
	extern "C" MAPPER_API static bool test();

private:

	extern "C" MAPPER_API void exporter(std::vector<std::string> vect, std::string temp, int key);
}
; */

//#endif MAPPER_H

class MAPPER_API Mapper {
public:
	explicit Mapper(int count = 0);
	void map(int k, std::string c, std::string dir);
	static bool test();
private:
	void exporter(std::vector<std::string> vect, std::string temp, int key);
};




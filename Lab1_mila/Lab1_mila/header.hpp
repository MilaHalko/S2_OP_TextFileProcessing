#pragma once

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int n = 20;
struct team
{
	string name;
	int score = 0;
};

void readFile(string path, string* arr);
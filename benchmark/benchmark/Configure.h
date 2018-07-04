#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;

class Configure
{
public:
	static Configure& getInstance()
	{
		return m_data;
	}
	vector<string> devices;
	vector<string> precision;
	vector<string> modelnames;
	vector<int> batchs;

private:
	static Configure m_data; //static data member �����������������ⶨ��
	Configure() {}
	~Configure() {}
};

Configure Configure::m_data;


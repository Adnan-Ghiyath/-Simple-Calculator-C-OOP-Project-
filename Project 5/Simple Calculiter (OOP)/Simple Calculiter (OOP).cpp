#include <iostream>
using namespace std;

class Calculiter
{
	float _Result = 0;
	float _LastNumber = 0;
	string _LastOpretor ="Clear";
	float _PreviusResult = 0;
	bool _IsZero(float Number)
	{
		return (Number == 0);
	}
public:
	void Add(float Number)
	{
		_LastNumber = Number;
		_PreviusResult = _Result;
		_LastOpretor = "Addting";
		_Result += Number;
	}
	void Sub(float Number)
	{
		_LastNumber = Number;
		_PreviusResult = _Result;
		_LastOpretor = "Subtratring";
		_Result -= Number;
	}
	void Div(float Number)
	{
		_LastNumber = Number;
		if (_IsZero(Number))
		{
			Number = 1;
		}
		_PreviusResult = _Result;
		_LastOpretor = "Divtrtring";
		_Result /= Number;
	}
	void Mulity(float Number)
	{
		_LastNumber = Number;
		_PreviusResult = _Result;
		_LastOpretor = "Multing";
		_Result *= Number;
	}
	float GetResult()
	{
		return _Result;
	}
	void Clear()
	{
		_LastNumber = 0;
		_PreviusResult = 0;
		_LastOpretor = "Clear";
		_Result = 0;
	}
	void CancleLastOpretor()
	{
		_LastNumber = 0;
		_LastOpretor = "Canling Last Opretorion: ";
		_Result = _PreviusResult;
	}
	void PrintResult()
	{
		cout << "Result "
			<< "After " << _LastOpretor << " " << _LastNumber << " is: " << _Result << endl;
	}

};
int main()
{
	Calculiter CL;
	CL.Clear();
	CL.Add(10);
	CL.PrintResult();
	CL.Add(100);
	CL.PrintResult();
	CL.Sub(20);
	CL.PrintResult();
	CL.Div(0);
	CL.PrintResult();
	CL.Div(2);
	CL.PrintResult();
	CL.Mulity(3);
	CL.PrintResult();
	CL.CancleLastOpretor();
	CL.PrintResult();
	CL.Clear();
	CL.PrintResult();
}

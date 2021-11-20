#pragma once
//if 


//1
int PluseOne(int NumberOne) {
	if (NumberOne > 0) {
		NumberOne += 1;
		return NumberOne;
	}
}
//2
int MinusTwo(int NumberOne) {
	if (NumberOne > 0) {
		NumberOne += 1;
		return NumberOne;
	}
	else {
		NumberOne -= 2;
		return NumberOne;
	}
}
//3
int Zero(int NumberOne) {
	if (NumberOne > 0) {
		NumberOne += 1;
		return NumberOne;
	}
	else if (NumberOne == 0) {
		NumberOne = 10;
		return NumberOne;
	}
	else {
		NumberOne -= 2;
		return NumberOne;
	}
}
//4
int Counter(int Counter, int NumberOne, int One, int Two, int Three) {
	One = NumberOne % 10;
	Two = NumberOne / 100;
	Three = (NumberOne / 10) % 10;
	if (One > 0) {
		Counter++;
	}
	if (Two > 0) {
		Counter++;
	}
	if (Three > 0) {
		Counter++;
	}
	return Counter;
}
//5
int CounterX2(int Counter, int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne > 0) {
		Counter++;
	}
	if (NumberTwo > 0) {
		Counter++;
	}
	if (NumberThree > 0) {
		Counter++;
	}
	return Counter;
}
//5.1
int CounterX21(int CounterNegative, int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne < 0) {
		CounterNegative++;
	}
	if (NumberTwo < 0) {
		CounterNegative++;
	}
	if (NumberThree < 0) {
		CounterNegative++;
	}
	return CounterNegative;
}
//6
int Big(int NumberOne, int NumberTwo) {
	if (NumberOne > NumberTwo) {
		return NumberOne;
	}
	else {
		return NumberTwo;
	}
}
//7
int MinMax(int NumberOne, int NumberTwo,int One , int Two) {
	One = 1;
	Two = 2;
	if (NumberOne > NumberTwo) {
		return Two;
	}
	else {
		return One;
	}
}
//8
int MinMax2(int NumberOne, int NumberTwo) {
	if (NumberOne > NumberTwo) {
		return NumberOne;
	}
	else{
		return NumberTwo;
	}
}
//9
bool New(bool NumberOne, bool NumberTwo, int Holder) {
	Holder = 0;
	cout << NumberOne << " " << NumberTwo << '\n';
	if (NumberOne > NumberTwo) {
		Holder = NumberOne;
		NumberOne = NumberTwo;
		NumberTwo = Holder;
		return NumberTwo;
	}
	cout << NumberOne << " " << NumberTwo << '\n';
}
//10
int Equals(int NumberOne, int NumberTwo, int Sum) {
	Sum = 0;
	Sum = NumberOne + NumberTwo;
	if (NumberOne != NumberTwo) {
		NumberOne = Sum;
		NumberTwo = Sum;
	}
	else {
		NumberOne = 0;
		NumberTwo = 0;
	}
	return ;
	cout << NumberOne << " " << NumberTwo;
}
//11
int Null(int NumberOne, int NumberTwo) {
	if (NumberOne > NumberTwo) {
		NumberTwo = NumberOne;
	}
	else if (NumberOne < NumberTwo) {
		NumberOne = NumberTwo;
	}
	else if (NumberOne == NumberTwo) {
		NumberOne = 0;
		NumberTwo = 0;
	}
	return;
	cout << NumberOne << " " << NumberTwo;
}
//12
int Min(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne < NumberTwo < NumberThree) {
		return NumberOne;
	}
	else if (NumberTwo < NumberOne < NumberThree) {
		return NumberTwo;
	}
	else if (NumberThree < NumberOne < NumberThree) {
		return NumberThree;
	}
}
//13
int mid(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne < NumberTwo && NumberOne > NumberThree)
	{
		return NumberOne;
	}
	else if (NumberTwo < NumberOne && NumberTwo > NumberThree) {
		return NumberTwo;
	}
	else if (NumberThree < NumberOne && NumberThree > NumberTwo){
		return NumberThree;
	}
}
//14
int MinMaxFrThree(int NumberOne, int NumberTwo, int NumberThree) {
	if (NumberOne < NumberTwo && NumberOne < NumberThree) {
		return NumberOne; 
	}
	else if (NumberTwo < NumberOne && NumberTwo < NumberThree) {
		return NumberTwo;
	} 
	else {
		return NumberThree;
	}


	if (NumberOne > NumberTwo && NumberOne>NumberThree) {
		return NumberOne;
	}
	else if (NumberTwo > NumberOne && NumberTwo > NumberThree) {
		return NumberTwo;
	}
	else {
		return NumberThree;
	}
}
//15
int SumMax(int Sum ,int NumberOne, int NumberTwo,int NumberThree) {
	if (NumberOne && NumberThree > NumberTwo) {
		Sum = NumberOne + NumberTwo;
		return Sum;
	}
	if (NumberOne && NumberTwo > NumberThree) {
		Sum = NumberOne + NumberTwo;
		return Sum;
	}
	if (NumberThree && NumberTwo > NumberOne) {
		Sum = NumberThree + NumberTwo;
		return Sum;
	}
	
}
//16
double Changed(double NumberOne, double NumberTwo, double NumberThree) {
	if (NumberOne > NumberTwo > NumberThree) {
		NumberOne *= 2;
		NumberTwo *= 2;
		NumberThree *= 2;
	}
	else {
		NumberOne = -NumberOne;
		NumberTwo = -NumberTwo;
		NumberThree = -NumberThree;
	}
	return;
	cout << NumberOne << ' ' << NumberTwo << ' ' << NumberThree;
}
//17
double Change2(double NumberOne, double NumberTwo, double NumberThree) {
	if (NumberOne > NumberTwo > NumberThree || NumberOne < NumberTwo < NumberThree) {
		NumberOne *= 2;
		NumberTwo *= 2;
		NumberThree *= 2;
	}
	else {
		NumberOne = -NumberOne;
		NumberTwo = -NumberTwo;
		NumberThree = -NumberThree;
	}
	return;
	cout << NumberOne << ' ' << NumberTwo << ' ' << NumberThree;
}
//18
int Number(int NumberOne, int NumberTwo, int NumberThree, int iOne, int iTwo, int iThree) {
	if (NumberOne == NumberThree) {
		return iTwo;
	}
	else if (NumberOne == NumberTwo) {
		return iThree;
	}
	else {
		return iOne;
	}
}
//19
int Number2(int NumberOne, int NumberTwo, int NumberThree, int NumberFour, int iOne, int iTwo, int iThree, int iFour) {
	if (NumberOne == NumberThree == NumberFour) {
		return iTwo;
	}
	else if (NumberOne == NumberTwo == NumberFour) {
		return iThree;
	}
	else if (NumberOne == NumberTwo == NumberThree) {
		return iFour;
	}
	else {
		return iOne;
	}
}
//20
int Axis(int NumberOne, int NumberTwo, int NumberThree,int Closer) {
	Closer = 0;
	if (NumberOne < NumberTwo < NumberThree) {
		Closer = NumberOne - NumberTwo;
		cout << NumberTwo << '\n';
		return Closer;
	}
	else if (NumberOne < NumberThree < NumberTwo) {
		Closer = NumberOne - NumberThree;
		cout << NumberThree << '\n';
		return Closer;
	}
	else {
		return false;
	}
}
//21
int Coord(int NumberOne, int NumberTwo, int Zero ,int One, int Two, int Three) {
	Zero = 0;
	One = 1;
	Two = 2;
	Three = 3;
	if (NumberOne == 0 && NumberTwo == 0) {
		return Zero;
	}
	else if (NumberOne == 0 && NumberTwo != 0) {
		return One;
	}
	else if (NumberOne != 0 && NumberTwo == 0) {
		return Two;
	}
	else {
		return Three;
	}
}
//22
void Quarter(int NumberOne, int NumberTwo) {
	if (NumberOne > 0 && NumberTwo > 0) {
		cout << "1";
	}
	else if (NumberOne < 0 && NumberTwo > 0) {
		cout << "2";
	}
	else if (NumberOne < 0 && NumberTwo < 0) {
		cout << "3";
	}
	else {
		cout << "4";
	}

}
//23
//!
//!
//!
//!
//!
//!
//! 
//! 


//24
bool Function(bool XNumber) {
	if (XNumber > 0) {
		XNumber = 2 * sin(XNumber);
		return XNumber;
	}
	else if (XNumber <= 0) {
		XNumber = 6 - XNumber;
		return XNumber;
	}
}
//25
int Function2(int XNumber) {
	if (XNumber < -2 || XNumber>2) {
		XNumber = 2 * XNumber;
		return XNumber;
	}
	else {
		XNumber = -3 * XNumber;
		return XNumber;
	}
}
//26
double Function3(double XNumber) {
	if (XNumber <= 0) {
		XNumber = -XNumber;
		return XNumber;
	}
	else if (0 < XNumber < 2) {
		XNumber = pow(XNumber, 2);
		return XNumber;
	}
	else if (XNumber >= 2) {
		XNumber = 4;
		return XNumber;
	}
}
//27
int Function4(int XNumber) {
	if (XNumber < 0) {
		XNumber = 0;
		return XNumber = 0;
	}
	else if (XNumber >= 0 & XNumber < 1 || XNumber >= 2 && XNumber < 3) {
		XNumber = 1;
		return XNumber;
	}
	else if (XNumber >= 1 && XNumber < 2 || XNumber >= 3 && XNumber < 4) {
		XNumber = -1;
		return XNumber;
	}
}
//28
int Year(int Year,int Days) {
	Days = (Year % 400 == 0 || Year % 4 == 0 && Year % 100 != 0 ) ? 366 : 365;
	return Days;
}
//29
void NUMBER(int NumberOne) {
	if (NumberOne < 0) {
		cout << "Отрицательное число";
	}
	else {
		cout << "Число положительное";
	}
	if (NumberOne == 0) {
		cout << "Число нулевое";
	}
	else {
		cout << "Число не нулевое";
	}
	if (NumberOne > 0 && NumberOne % 2 != 0) {
		cout << "Нечетное положительное";
	}
	else {
		cout << "Четное положительное";
	}
}
//30
void Number2(int NumberOne) {
	if (NumberOne > 0 && NumberOne < 1000) {

	}
	else if (NumberOne > 9 && NumberOne < 100 && NumberOne%2==0) {
		cout << "Четное двузначное";
	}
	else if (NumberOne > 99 && NumberOne%2!=0) {
		cout << "Нечетное трехзначное";
	}
	
}





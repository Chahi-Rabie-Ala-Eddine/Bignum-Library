#ifndef BIGNUM_H
#define BIGNUM_H

#include <gmp.h>

/*Big number type*/
struct BigNumber
{
   mpz_t Number;
};
typedef BigNumber BIG;

/*Set Big number value*/
BIG SetValue(string value);

/*Get Big number hexadecimal size*/
unsigned int GetSize(BIG const& number);

/*Get Big number binary size*/
unsigned int GetBinarySize(BIG const& number);

/*Get Big number value*/
string GetValue(BIG const& number);

/*Get Big number value*/
string GetBinaryValue(BIG const& number);

/*Initialise a Big number value using another one*/
BIG Equal(BIG Number);

/*Check if the two numbers are equals*/
bool operator==(BIG const& firstNum, BIG const& secondNum);

/*Check if the two numbers are different*/
bool operator!=(BIG const& firstNum, BIG const& secondNum);

/*Check if the first number is greater than the second*/
bool operator>(BIG const& firstNum, BIG const& secondNum);

/*Check if the first number is smaller than the second*/
bool operator<(BIG const& firstNum, BIG const& secondNum);

/*Check if the number is odd*/
bool IsOdd(BIG const& Num);

/*Check if the number is even*/
bool IsEven(BIG const& Num);

/*Addition*/
BIG operator+(BIG const& firstNum, BIG const& secondNum);

/*Substraction*/
BIG operator-(BIG const& firstNum, BIG const& secondNum);

/*Multiplication*/
BIG operator*(BIG const& firstNum, BIG const& secondNum);

/*Division*/
BIG operator/(BIG const& firstNum, BIG const& secondNum);

/*Incrementation*/
void Increment(BIG Num);

/*Decrementation*/
void Decrement(BIG Num);

/*Square*/
BIG Square(BIG const& Num);

/*Simple exponentiation : mpz_t power unsigned long*/
BIG SimpleExponentiation(BIG const& base, unsigned long int exponent);

/*Big exponentiation : mpz_t power mpz_t*/
BIG BigExponentiation(BIG const& base, BIG const& exponent);

/*Compute module*/
BIG Mod(BIG const& Num, BIG const& mod);

/*Compute inverse*/
BIG Inverse(BIG const& Num, BIG const& mod);

/*Modular multiplication*/
BIG ModularMultiplication(BIG const& firstNum, BIG const& secondNum, BIG const& mod);

/*Modular exponentiation*/
BIG ModularExponentiation(BIG const& Num, BIG const& exp, BIG const& mod);

/*Normal left to right fast expnonentiation*/
BIG NormalLTRSAM(BIG const& base, BIG const& exp, BIG const& mod);

/*Montgomery Multiplication*/
BIG MontgomeryMultiplication(BIG const& firstNum, BIG const& secondNum, BIG const& mod);

/*Montgomery Square*/
BIG MontgomerySquare(BIG const& Num, BIG const& mod);

/*Montgomery left to right fast exponentiation using shift*/
BIG MontgomeryLTRSAM(BIG const& base, BIG const& exp, BIG const& mod);

/*Print Big number value*/
void PrintBigNumber(BIG const& number);

#endif //BIGNUM_H

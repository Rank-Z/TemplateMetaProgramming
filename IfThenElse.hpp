#ifndef IFTHENELSE_HPP
#define IFTHENELSE_HPP

template<bool _flag,typename trueT,typename falseT>
class IfThenElse;

template<typename trueT,typename falseT>
class IfThenElse<true, trueT, falseT>
{
	using resultT = trueT;
};

template<typename trueT,typename falseT>
class IfThenElse<false, trueT, falseT>
{
	using resultT = falseT;
};

//example

//	IfThenElse<1,int,double>::resultT somenum =1.111;	equal to int somenum=1.111;

//	IfThenElse<0,int,double>::resultT somenum =1.111;	equal to double somenum=1.111;

#endif // !IFTHENELSE_HPP

#include "Trit.h"

class Tryte 
{
	private:
		Trit Value[];
	
	public:
		Tryte();
		~Tryte();
		
		// Compound arithmetic.
		Tryte operator+=( Tryte &other );
		Tryte operator-=( Tryte &other );
		Tryte operator*=( Tryte &other );
		Tryte operator/=( Tryte &other );
		
		// Binary arithmetic.
		Tryte operator+( Tryte &other );
		Tryte operator-( Tryte &other );
		Tryte operator*( Tryte &other );
		Tryte operator/( Tryte &other );
		Tryte operator%( Tryte &other );
		
		Tryte operator!( );
		
		// AND
		Tryte operator&( Tryte &other );
		Tryte operator&&( Tryte &other );
		Tryte operator&=( Tryte &other );
		
		// OR
		Tryte operator|( Tryte &other );
		Tryte operator||( Tryte &other );
		Tryte operator|=( Tryte &other );
		
		// XOR
		Tryte operator^( Tryte &other );
		Tryte operator^=( Tryte &other );
		
		// Bitshifting.
		Tryte operator<<( Tryte &other );
		Tryte operator<<=( Tryte &other );
		Tryte operator>>( Tryte &other );
		Tryte operator>>=( Tryte &other );

		// Comparison.
		Tryte operator>( Tryte &other );
		Tryte operator<( Tryte &other );
		Tryte operator==( Tryte &other );
		Tryte operator!=( Tryte &other );
		
};
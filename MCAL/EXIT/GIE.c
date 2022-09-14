
#include "Services/BIT_MATHS.h"
#include "Services/STD_TYPES.h"
#include "GIE.h"

void GIE_ENABLE()
{
	SET_BIT(SREG, 7);
}


void GIE_DISABLE()
{
	CLR_BIT(SREG, 7);
}




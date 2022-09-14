
#include "Services/BIT_MATHS.h"
#include "Services/STD_TYPES.h"
#include "EXIT.h"


void EXTI_voidINT0Control(u8 Copy_u8Status, u8 Copy_u8Cinfiguration)
{
    if (Copy_u8Status == DISABLE)
    {
        CLR_BIT(GICR, 6);
    }
    else if (Copy_u8Status == ENABLE)
    {
        SET_BIT(GICR, 6);
        /* Configuration */
        if (Copy_u8Cinfiguration == EXTI_IOC)
        {
            SET_BIT(MCUCR, 0);
            CLR_BIT(MCUCR, 1);
        }
        else if (Copy_u8Cinfiguration == EXTI_RISING)
        {
            SET_BIT(MCUCR, 0);
            SET_BIT(MCUCR, 1);
        }
        else if (Copy_u8Cinfiguration == EXTI_FALLING)
        {
            CLR_BIT(MCUCR, 0);
            SET_BIT(MCUCR, 1);
        }
        else if (Copy_u8Cinfiguration == EXTI_LOW)
        {
            CLR_BIT(MCUCR, 0);
            CLR_BIT(MCUCR, 1);
        }
        else
        {
            /* code */
        }

    }
    else
    {
        /* code */
    }

}

void EXTI_voidINT1Control(u8 Copy_u8Status, u8 Copy_u8Cinfiguration)
{
    if (Copy_u8Status == DISABLE)
    {
        CLR_BIT(GICR, 7);
    }
    else if (Copy_u8Status == ENABLE)
    {
        SET_BIT(GICR, 7);
        /* Configuration */
        if (Copy_u8Cinfiguration == EXTI_IOC)
        {
            SET_BIT(MCUCR, 2);
            CLR_BIT(MCUCR, 3);
        }
        else if (Copy_u8Cinfiguration == EXTI_RISING)
        {
            SET_BIT(MCUCR, 2);
            SET_BIT(MCUCR, 3);
        }
        else if (Copy_u8Cinfiguration == EXTI_FALLING)
        {
            CLR_BIT(MCUCR, 2);
            SET_BIT(MCUCR, 3);
        }
        else if (Copy_u8Cinfiguration == EXTI_LOW)
        {
            CLR_BIT(MCUCR, 2);
            CLR_BIT(MCUCR, 3);
        }
        else
        {
            /* code */
        }

    }
    else
    {
        /* code */
    }
}

void EXTI_voidINT2Control(u8 Copy_u8Status, u8 Copy_u8Cinfiguration)
{
    if (Copy_u8Status == DISABLE)
    {
        CLR_BIT(GICR, 5);
    }
    else if (Copy_u8Status == ENABLE)
    {
        SET_BIT(GICR, 5);
        /* Configuration */
        if (Copy_u8Cinfiguration == EXTI_FALLING)
        {
            CLR_BIT(MCUCSR, 6);
        }
        else if (Copy_u8Cinfiguration == EXTI_RISING)
        {
            SET_BIT(MCUCSR, 6);
        }
        else
        {
            /* code */
        }

    }
    else
    {
        /* code */
    }
}
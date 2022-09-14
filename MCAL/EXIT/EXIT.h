
#ifndef EXIT_H_
#define EXIT_H_


#define MCUCR       *(volatile u8 *)(0x55)
#define MCUCSR      *(volatile u8 *)(0x54)
#define GICR        *(volatile u8 *)(0x5B)

#define EXTI_IOC        0
#define EXTI_RISING     1
#define EXTI_FALLING    2
#define EXTI_LOW        3

#define ENABLE      1
#define DISABLE     0

void EXTI_voidINT0Control(u8 Copy_u8Status, u8 Copy_u8Cinfiguration);
void EXTI_voidINT1Control(u8 Copy_u8Status, u8 Copy_u8Cinfiguration);
void EXTI_voidINT2Control(u8 Copy_u8Status, u8 Copy_u8Cinfiguration);



#endif /* EXIT_H_ */

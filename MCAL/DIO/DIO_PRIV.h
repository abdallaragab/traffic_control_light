#pragma once
/*
 * DIO_PRIV.h
 *    Author: a-m-m
 */

#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_

 //PORTA
#define PORTA_START 0
#define PORTA_END 	7
#define PORTA_SIZE	8

//PORTB
#define PORTB_START 8
#define PORTB_END 	15
#define PORTB_SIZE	8

//PORTC
#define PORTC_START 16
#define PORTC_END 	23
#define PORTC_SIZE	8

//PORTD
#define PORTD_START 24
#define PORTD_END 	31
#define PORTD_SIZE	8

#define PORTA *(volatile u8 *)(0x3B)
#define PINA  *(volatile u8 *)(0x39)
#define DDRA  *(volatile u8 *)(0x3A)

#define PORTB *(volatile u8 *)(0x38)
#define PINB  *(volatile u8 *)(0x36)
#define DDRB  *(volatile u8 *)(0x37)

#define PORTC *(volatile u8 *)(0x35)
#define PINC  *(volatile u8 *)(0x33)
#define DDRC  *(volatile u8 *)(0x34)

#define PORTD *(volatile u8 *)(0x32)
#define PIND  *(volatile u8 *)(0x30)
#define DDRD  *(volatile u8 *)(0x31)


#define DIO_u8_PORTA_DIRECTIONS BIT_CONC(DIO_direction_PIN7,DIO_direction_PIN6,DIO_direction_PIN5,DIO_direction_PIN4,DIO_direction_PIN3,DIO_direction_PIN2,DIO_direction_PIN1,DIO_direction_PIN0)
#define DIO_u8_PORTB_DIRECTIONS	BIT_CONC(DIO_direction_PIN15,DIO_direction_PIN14,DIO_direction_PIN13,DIO_direction_PIN12,DIO_direction_PIN11,DIO_direction_PIN10,DIO_direction_PIN9,DIO_direction_PIN8)
#define DIO_u8_PORTC_DIRECTIONS	BIT_CONC(DIO_direction_PIN23,DIO_direction_PIN22,DIO_direction_PIN21,DIO_direction_PIN20,DIO_direction_PIN19,DIO_direction_PIN18,DIO_direction_PIN17,DIO_direction_PIN16)
#define DIO_u8_PORTD_DIRECTIONS	BIT_CONC(DIO_direction_PIN31,DIO_direction_PIN30,DIO_direction_PIN29,DIO_direction_PIN28,DIO_direction_PIN27,DIO_direction_PIN26,DIO_direction_PIN25,DIO_direction_PIN24)




#endif /* DIO_PRIV_H_ */


#ifndef GIE_H_
#define GIE_H_

#define SREG *( volatile u8*)(0x5F)

void GIE_ENABLE();
void GIE_DISABLE();



#endif /* GIE_H_ */

#ifndef _EXTI_H
#define _EXTI_H

#define EXTI_LINE0					0
#define EXTI_LINE1					1
#define EXTI_LINE2					2
#define EXTI_LINE3					3
#define EXTI_LINE4					4

#define EXTI_FALLING_EDGE		false
#define EXTI_RISING_EDGE		true

//Configures an External interrupt line
extern void EXTI_Init(uint8_t extIntLine, bool edgeTrigger);
//Set trigger state (i.e. 'true' if edge is detected and 'false' if otherwise)
extern void EXTI_Set_Edge_Detected(uint8_t extIntLine, bool isDetected);
//Get trigger state (i.e. 'true' if edge is detected and 'false' if otherwise)
extern bool EXTI_Get_Edge_Detected(uint8_t extIntLine);

extern void EXTI_Get_Voltage_Count_Value(uint32_t* timestamp);
extern void EXTI_Get_Current_Count_Value(uint32_t* timestamp);

extern void EXTI_Set_Flag_Status(bool status);
extern bool EXTI_Get_Flag_Status(void);

#endif //_EXTI_H

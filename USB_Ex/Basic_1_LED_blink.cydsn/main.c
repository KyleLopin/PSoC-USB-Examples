/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    char uart_char;
    for(;;)
    {
        /* Place your application code here. */
        //UART_UartPutString("Hello, World!\r\n");
        // UART_UartPutCRLF(0x00);
        uart_char = UART_UartGetChar();
        
        if (uart_char == 'I') {
            UART_UartPutString("Hello, World!\r\n");
            uart_char = 0x00;
        }
        
        CyDelay(500);
    }
}

/* [] END OF FILE */

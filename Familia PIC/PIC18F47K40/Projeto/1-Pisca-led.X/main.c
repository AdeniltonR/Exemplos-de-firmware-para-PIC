/*
 * NOME: Adenilton Ribeiro
 * DATA: 04/02/2024
 * PROJETO: Pisca Led
 * VERSAO: 01
 * DESCRICAO: - feat: Fazer MCU piscar um led.
 *            - docs: MPLAB X IDE v6.20 - Compilador XC8 2.46 - PICSimLab Simulador 0.9.1
 * LINKS:
*/

// ========================================================================================================
// ---INCLUDE---

#include <xc.h>
#include "fuses.h"
//---defina a frequencia do oscilador---
#define _XTAL_FREQ 8000000  

// ========================================================================================================
//---BIBLIOTECAS AUXILIARES---

// ========================================================================================================
//---MAPEAMENTO DE ESTADO---

// ========================================================================================================
//---MAPEAMENTO DE HARDWARE---

#define PIN_led RB0

// ========================================================================================================
//---VARIAVEIS GLOBAIS---

// ========================================================================================================
//---PROTOTIPO DA FUNCAO---

// ========================================================================================================
/**
 * @brief Void main
 * 
 */ 
void main(void) {
    //---configura o pino RB0 como saida--- 
    TRISBbits.TRISB0 = 0;
    
    //---inicialmente, desliga o Led---
    PIN_led = 0;
    
    while (1) {
        PIN_led = 1;
        __delay_ms(500); 
        PIN_led = 0; 
        __delay_ms(500);
  }
}

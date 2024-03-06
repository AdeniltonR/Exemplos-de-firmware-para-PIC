/*
 * NOME: Adenilton Ribeiro
 * DATA: 04/03/2024
 * PROJETO: Fuses.h
 * VERSAO: 01
 * DESCRICAO: - feat: Configura��es de bits de configura��o PIC18F47K40
 *            - docs: MPLAB X IDE v6.20 - Compilador XC8 2.46 - PICSimLab Simulador 0.9.1
 * LINKS: - 
*/

// ========================================================================================================
/**
 * @brief Fuses.h
 * 
 */ 
#ifndef FUSES_H
#define FUSES_H

// CONFIG1L
#pragma config FEXTOSC   = ECH       // Bits de sele��o do modo oscilador externo (EC (rel�gio externo) acima de 8 MHz; PFM definido para alta pot�ncia)
#pragma config RSTOSC    = EXTOSC    // Valor padr�o de inicializa��o para bits COSC (EXTOSC operando por bits FEXTOSC (padr�o de fabrica��o do dispositivo))

// CONFIG1H
#pragma config CLKOUTEN  = OFF       // Bit de ativa��o do Clock Out (a fun��o CLKOUT est� desativada)
#pragma config CSWEN     = ON        // Bit de ativa��o da chave de rel�gio (� permitida a grava��o em NOSC e NDIV)
#pragma config FCMEN     = ON        // Bit de ativa��o do monitor de rel�gio � prova de falhas (Monitor de rel�gio � prova de falhas ativado)

// CONFIG2L
#pragma config MCLRE     = EXTMCLR   // Bit Master Clear Enable (se LVP = 0, o pino MCLR � MCLR; se LVP = 1, a fun��o do pino RE3 � MCLR)
#pragma config PWRTE     = OFF       // Bit de ativa��o do temporizador de inicializa��o (temporizador de inicializa��o desativado)
#pragma config LPBOREN   = OFF       // Bit de habilita��o BOR de baixa pot�ncia (ULPBOR desabilitado)
#pragma config BOREN     = SBORDIS   // Bits de habilita��o de reinicializa��o de brown-out (redefini��o de brown-out habilitada, bit SBOREN � ignorado)

// CONFIG2H
#pragma config BORV      = VBOR_2P45 // Bits de sele��o de tens�o de reinicializa��o de brown out (Tens�o de reinicializa��o de brown out (VBOR) definida como 2,45 V)
#pragma config ZCD       = OFF       // Bit de desativa��o de ZCD (ZCD desabilitado. ZCD pode ser habilitado configurando o bit ZCDSEN de ZCDCON)
#pragma config PPS1WAY   = ON        // PPSLOCK Bit PPSLOCK Bit de habilita��o de configura��o unidirecional (o bit PPSLOCK pode ser limpo e definido apenas uma vez; os registros PPS permanecem bloqueados ap�s um ciclo de limpeza/defini��o)
#pragma config STVREN    = ON        // Bit de habilita��o de redefini��o de pilha cheia/subfluxo (pilha cheia/subfluxo causar� reinicializa��o)
#pragma config DEBUG     = OFF       // Bit de habilita��o do depurador (depurador em segundo plano desabilitado)
#pragma config XINST     = OFF       // Bit de habilita��o do conjunto de instru��es estendido (conjunto de instru��es estendido e modo de endere�amento indexado desabilitados)

// CONFIG3L
#pragma config WDTCPS    = WDTCPS_31 // Bits de sele��o de per�odo WDT (propor��o do divisor 1:65536; controle de software de WDTPS)
#pragma config WDTE      = OFF       // Modo de opera��o WDT (WDT ativado independentemente do sono)

// CONFIG3H
#pragma config WDTCWS    = WDTCWS_7  // Bits de sele��o de janela WDT (janela sempre aberta (100%); controle de software; acesso com chave n�o � necess�rio)
#pragma config WDTCCS    = SC        // Seletor de clock de entrada DT (controle de software)

// CONFIG4L
#pragma config WRT0      = OFF       // Bloco de prote��o contra grava��o 0 (Bloco 0 (000800-003FFFh) n�o protegido contra grava��o)
#pragma config WRT1      = OFF       // Bloco de prote��o contra grava��o 1 (Bloco 1 (004000-007FFFh) n�o protegido contra grava��o)
#pragma config WRT2      = OFF       // Bloco de prote��o contra grava��o 2 (Bloco 2 (008000-00BFFFh) n�o protegido contra grava��o)
#pragma config WRT3      = OFF       // Bloco de prote��o contra grava��o 3 (Bloco 3 (00C000-00FFFFh) n�o protegido contra grava��o)
#pragma config WRT4      = OFF       // Bloco de prote��o contra grava��o 3 (Bloco 4 (010000-013FFFh) n�o protegido contra grava��o)
#pragma config WRT5      = OFF       // Bloco de prote��o contra grava��o 3 (Bloco 5 (014000-017FFFh) n�o protegido contra grava��o)
#pragma config WRT6      = OFF       // Bloco de prote��o contra grava��o 3 (Bloco 6 (018000-01BFFFh) n�o protegido contra grava��o)
#pragma config WRT7      = OFF       // Bloco de prote��o contra grava��o 3 (Bloco 7 (01C000-01FFFFh) n�o protegido contra grava��o)

// CONFIG4H
#pragma config WRTC      = OFF       // Bit de prote��o contra grava��o do registro de configura��o (registros de configura��o (300000-30000Bh) n�o protegidos contra grava��o)
#pragma config WRTB      = OFF       // Bit de prote��o contra grava��o do bloco de inicializa��o (bloco de inicializa��o (000000-0007FFh) n�o protegido contra grava��o)
#pragma config WRTD      = OFF       // Bit de prote��o contra grava��o da EEPROM de dados (EEPROM de dados n�o protegida contra grava��o)
#pragma config SCANE     = ON        // Bit de habilita��o do scanner (o m�dulo do scanner est� dispon�vel para uso, o bit SCANMD pode controlar o m�dulo)
#pragma config LVP       = ON        // Bit de habilita��o de programa��o de baixa tens�o (programa��o de baixa tens�o habilitada. A fun��o do pino MCLR/VPP � MCLR. O bit de configura��o MCLRE � ignorado)

// CONFIG5L
#pragma config CP        = OFF       // Bit de prote��o de c�digo de mem�ria do programa UserNVM (prote��o de c�digo UserNVM desativada)
#pragma config CPD       = OFF       // DataNVM Memory Code Protection bit (DataNVM code protection disabled)

// CONFIG5H

// CONFIG6L
#pragma config EBTR0     = OFF       // Bloco de prote��o de leitura de tabela 0 (Bloco 0 (000800-003FFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR1     = OFF       // Bloco de prote��o de leitura de tabela 1 (Bloco 1 (004000-007FFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR2     = OFF       // Bloco de prote��o de leitura de tabela 2 (Bloco 2 (008000-00BFFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR3     = OFF       // Bloco de prote��o de leitura de tabela 3 (Bloco 3 (00C000-00FFFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR4     = OFF       // Bloco de prote��o de leitura de tabela 4 (Bloco 4 (010000-013FFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR5     = OFF       // Bloco de prote��o de leitura de tabela 5 (Bloco 5 (014000-017FFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR6     = OFF       // Bloco de prote��o de leitura de tabela 6 (Bloco 6 (018000-01BFFFh) n�o protegido de leituras de tabela executadas em outros blocos)
#pragma config EBTR7     = OFF       // Bloco de prote��o de leitura de tabela 7 (Bloco 7 (01C000-01FFFFh) n�o protegido de leituras de tabela executadas em outros blocos)

// CONFIG6H
#pragma config EBTRB     = OFF       // Bit de prote��o de leitura de tabela do bloco de inicializa��o (bloco de inicializa��o (000000-0007FFh) n�o protegido de leituras de tabela executadas em outros blocos)

#endif

// #pragma as instru��es de configura��o devem preceder as inclus�es do arquivo do projeto.
// Use enums de projeto em vez de #define para ON e OFF.
// ========================================================================================================



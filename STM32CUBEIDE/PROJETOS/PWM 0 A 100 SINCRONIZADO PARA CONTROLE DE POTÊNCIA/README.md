Este programa serve para a sincronização de chaveamento de um Triac, SCR ou mosfet, para controle de potência da tensão de rede.
Este programa utiliza um sistema de sincronização com Timers em modo slave, que dispara um pulso com determinado duty que é ajustado por uma entrada serial(teclas + e -).
desta forma ele mandará um pulso sincronizado com a tensão da rede em 60Hz, este pulso só é enviado quando ocorre uma detecção por 0V da rede, feita por um circuito externo.


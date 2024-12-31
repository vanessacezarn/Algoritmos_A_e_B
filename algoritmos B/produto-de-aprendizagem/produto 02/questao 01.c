//A Spies Breaching Computers, uma agência privada de espiões digitais, está desenvolvendo um novo dispositivo para interceptação de
//informações que, através de ondas eletromagnéticas, permite a espionagem mesmo sem contato físico com o alvo. O dispositivo tenta 
//coletar informações de um byte por vez, isto é, uma sequência de 8 bits onde cada um deles, naturalmente, pode ter valor 0 ou 1. 
//Em determinadas situações, devido a interferências de outros dispositivos, a leitura não pode ser feita com sucesso. Neste caso, o 
//dispositivo retorna o valor 9 para o bit correspondente, informando que não foi possível efetuar a leitura. De forma a automatizar
//o reconhecimento das informaçõees lidas, foi feita uma solicitação de um programa que, a partir das informaçõees lidas pelo 
//dispositivo, informe se todos os bits foram lidos com sucesso ou não. Sua tarefa é escrever este programa. Entrada:
//A entrada consiste de uma única linha, contendo 8 números inteiros N1, N2, N3, N4, N5, N6, N7 e N8,indicando os valores lidos pelo
//dispositivo (Ni é 0, 1 ou 9 para 1 ≤ i ≤ 8). 1 Adaptado da Maratona de Programação da SBC 2022  Saída: Imprima uma única linha 
//contendo a letra maiúscula “S” caso todos os bits sejam lidos com sucesso; caso contrário imprima uma única linha contendo a 
//letra maiúscula “F”, correspondendo a uma falha.

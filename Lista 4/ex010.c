/* DESCRIÇÃO
A Cifra de Vigenere é uma das técnicas de codificação mais simples e conhecidas
do mundo, que consiste na substituição de um caracter por outro de acordo com
uma chave e uma certa lógica. A chave é uma palavra, onde cada caracter vai ser
usado individualmente para codificar uma mensagem, através do seguinte processo:
  1. considere que as letras da chave e da mensagem são substituídas pelas suas
respectivas posições, de 1 a 26, de acordo com a sua posição no alfabeto;
  2. o primeiro elemento da mensagem deve ser somado ao primeiro elemento da
chave;
  3. o segundo elemento da mensagem com o segundo da chave, e assim por diante;
voltando ao primeiro elemento da chave quando ela acabar. Quando o valor somado
é superior a 26, ele volta para o começo do alfabeto. Por exemplo, a mensagem
"eu sou legal" codificada com a chave "oi", ficaria "sc gwi tsoot", onde o 'e'
se moveu 15 caracteres, o 'u' se moveu 9, o 's' se moveu 15, o 'o' se moveu 9, e
assim por diante. Você deve fazer um programa capaz de descriptografar uma
mensagem dada uma determinada chave de quatro caracteres.

ENTRADA
Seu programa irá receber quatro caracteres na primeira linha, essa é a chave que
foi usada para criptografar a mensagem. Na segunda linha, você irá receber uma
mensagem que deve ser descriptografada. Essa mensagem termina com uma quebra de
linha (\n).

SAÍDA
Seu programa deverá imprimir a frase descriptografada com uma quebra de linha no
final (\n). Caso hajam vírgulas, espaços ou pontos finais, eles não devem ser
alterados.

IMPORTANTE
NÃO use vetores para armezar a frase, o programa pode e deve ser implementado
sem usar vetores. */

// feito pelo gepeto

#include <stdio.h>

int main() {
    char chave1, chave2, chave3, chave4;
    char mensagem;

    scanf("%c%c%c%c\n", &chave1, &chave2, &chave3, &chave4);

    while (scanf("%c", &mensagem) == 1 && mensagem != '\n') {
        if (mensagem >= 'a' && mensagem <= 'z') {
            mensagem -= 'a'; 
            mensagem = (mensagem - (chave1 - 'a')) % 26;
            if (mensagem < 0) mensagem += 26; 
            printf("%c", mensagem + 'a'); 
            char temp = chave1;
            chave1 = chave2;
            chave2 = chave3;
            chave3 = chave4;
            chave4 = temp;
        } else if (mensagem >= 'A' && mensagem <= 'Z') {
            mensagem -= 'A'; 
            mensagem = (mensagem - (chave1 - 'A')) % 26;
            if (mensagem < 0) mensagem += 26; 
            printf("%c", mensagem + 'A');
            char temp = chave1;
            chave1 = chave2;
            chave2 = chave3;
            chave3 = chave4;
            chave4 = temp;
        } else {
            printf("%c", mensagem); 
        }
    }
    printf("\n");

    return 0;
}


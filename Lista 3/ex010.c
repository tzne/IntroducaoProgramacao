/* DESCRIÇÃO
Em um belo dia de fim de semana, após ter terminado todas as suas tarefas e
listas de exercícios, você recebe uma mensagem de seu criador de conteúdo
favorito, que faz guias de personagens de um jogo, sempre precisando deixar
esses personagens com o maior poder possível para ganhar mais visualizações. A
mensagem diz: – "E aí lenda, tudo bem? Fiquei sabendo que agora você cursa
Introdução à Programação na UFSCar! Vim fazer um pedido exclusivo para você em
troca de um salve no meu canal ;)" – "Como você deve saber, conseguir as
relíquias mais fortes para meus personagens é um processo muito tedioso que
retarda minha análise e teste dos heróis, então queria que fizesse um programa
que automatiza esse processo! Não deve ser muito difícil, né?" Seus olhos
imediatamente brilham - "O criador de conteúdo que eu assisto o tempo todo, veio
pedir a mim que o ajudasse?? Deve ser um sonho!!!" - e você pula para seu
computador e começa a pensar. Nesse jogo, as relíquias são itens equipáveis por
um personagem que aumentam seus atributos, como vida, defesa e ataque, mas não
são universalmente boas ou ruins, pois existem personagens ofensivos e outros
que dão suporte a eles, exigindo atributos diferentes. Por exemplo, suportes
precisam sobreviver para ajudar o personagem ofensivo, tornando atributos
defensivos mais valiosos. Por outro lado, atributos defensivos em personagens
ofensivos ocupam o lugar de atributos que poderiam aumentar seu dano. As
relíquias têm um atributo primário, que é o mais importante, e 4 atributos
secundários distintos entre si, de menor efeito, mas muito importantes quando se
procura maximizar o poder de um herói. Dessa forma, você monta uma tabela de
prioridade:

Atributo	Para ofensivos	Para suportes
Taxa crítica	Bom	        Ruim
Ataque	        Médio        	Ruim
Velocidade	Médio	        Bom
Vida        	Ruim        	Médio
Defesa        	Ruim        	Médio

E estabelece, também, algumas regras:
  + Toda relíquia tem um valor para ofensivos e outro para suportes.
  + O valor de uma relíquia não se altera se o atributo primário for bom, pois
isso é visto como o mínimo para uma relíquia ao menos ter potencial.
  + Um atributo secundário médio torna uma relíquia mais valiosa por uma
quantidade.
  + Um atributo secundário ruim desvaloriza uma relíquia o tanto quanto um médio
valoriza.
  + Uma relíquia com o atributo primário médio terá seu valor decrescido pela
mesma quantia que dois atributos secundários ruins.
  + Um atributo secundário bom valoriza o dobro do que um médio.
  + Uma relíquia será imediatamente ruim se seu atributo primário for ruim.

Por último, escolhe três categorias com exemplos com atributo primário bom:
  + Relíquias boas (melhor valor possível): secundários bom, médio, médio e
ruim;
  + Relíquias com potencial (valor médio): secundários bom, médio, ruim e ruim;
  + Lixo (qualquer valor menor que o médio): secundários médio, médio, ruim,
ruim.


ENTRADA
Seu programa deve receber 5 caractéres separados por espaço: o atributo
principal da relíquia e seus 4 atributos secundários, nessa ordem, utilizando a
codificação: Atributo	Caractere Taxa crítica	T Ataque	        A
Velocidade	S
Vida        	V
Defesa        	D


SAÍDA
Seu programa deverá imprimir na tela a classificação da relíquia no formato:
Essa reliquia XXX para personagens ofensivos e YYY para suportes., sendo XXX e
YYY eh um lixo, tem potencial ou eh boa, dependendo da qualidade da relíquia. */

#include <stdio.h>

int main() {
  char principal, secundario1, secundario2, secundario3, secundario4;
  int valor_ofensivo=0, valor_suporte=0;
  
  scanf("%c %c %c %c %c", &principal, &secundario1, &secundario2, &secundario3, &secundario4);

  switch(principal) {
    case 'T':
      valor_suporte = -10;
      break;
    case 'A':
      valor_ofensivo -= 2;
      valor_suporte = -10;
      break;
    case 'S':
      valor_ofensivo -=2;
      break;
    case 'V':
      valor_ofensivo = -10;
      valor_suporte -=2;
      break;
    case 'D':
      valor_ofensivo = -10;
      valor_suporte -=2;
      break;
  }

  switch(secundario1) {
    case 'T':
      valor_ofensivo += 2;
      valor_suporte--;
      break;
    case 'A':
      valor_ofensivo++;
      valor_suporte--;
      break;
    case 'S':
      valor_ofensivo++;
      valor_suporte +=2;
      break;
    case 'V':
      valor_ofensivo--;
      valor_suporte++;
      break;
    case 'D':
      valor_ofensivo--;
      valor_suporte++;
  }

  switch(secundario2) {
    case 'T':
      valor_ofensivo += 2;
      valor_suporte--;
      break;
    case 'A':
      valor_ofensivo++;
      valor_suporte--;
      break;
    case 'S':
      valor_ofensivo++;
      valor_suporte +=2;
      break;
    case 'V':
      valor_ofensivo--;
      valor_suporte++;
      break;
    case 'D':
      valor_ofensivo--;
      valor_suporte++;
  }

  switch(secundario3) {
    case 'T':
      valor_ofensivo += 2;
      valor_suporte--;
      break;
    case 'A':
      valor_ofensivo++;
      valor_suporte--;
      break;
    case 'S':
      valor_ofensivo++;
      valor_suporte +=2;
      break;
    case 'V':
      valor_ofensivo--;
      valor_suporte++;
      break;
    case 'D':
      valor_ofensivo--;
      valor_suporte++;
  }

  switch(secundario4) {
    case 'T':
      valor_ofensivo += 2;
      valor_suporte--;
      break;
    case 'A':
      valor_ofensivo++;
      valor_suporte--;
      break;
    case 'S':
      valor_ofensivo++;
      valor_suporte +=2;
      break;
    case 'V':
      valor_ofensivo--;
      valor_suporte++;
      break;
    case 'D':
      valor_ofensivo--;
      valor_suporte++;
  }

  if (valor_ofensivo == 3 && valor_suporte <= 0) {
    printf("Essa reliquia eh boa para personagens ofensivos e eh um lixo para suportes.\n");
  } else if (valor_ofensivo == 3 && valor_suporte == 1) {
    printf("Essa reliquia eh boa para personagens ofensivos e tem potencial para suportes.\n");
  } else if (valor_ofensivo == 3 && valor_suporte == 3 ) {
    printf("Essa reliquia eh boa para personagens ofensivos e eh boa para suportes.\n");
  } else if (valor_ofensivo == 1 && valor_suporte == 1) {
    printf("Essa reliquia tem potencial para personagens ofensivos e tem potencial para suportes.\n");
  } else if (valor_ofensivo == 1 && valor_suporte == 3 ) {
    printf("Essa reliquia tem potencial para personagens ofensivos e eh boa para suportes.\n");
  } else if (valor_ofensivo == 1 && valor_suporte <= 0) {
    printf("Essa reliquia tem potencial para personagens ofensivos e eh um lixo para suportes.\n");
  } else if (valor_ofensivo <= 0 && valor_suporte == 1) {
    printf("Essa reliquia eh um lixo para personagens ofensivos e tem potencial para suportes.\n");
  } else if (valor_ofensivo <= 0 && valor_suporte == 3 ) {
    printf("Essa reliquia eh um lixo para personagens ofensivos e eh boa para suportes.\n");
  } else if (valor_ofensivo <= 0 && valor_suporte <= 0) {
    printf("Essa reliquia eh um lixo para personagens ofensivos e eh um lixo para suportes.\n");
  }

  return 0;
}

#include"pilha.h"
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

//Função para criar uma pilha, alocando memória dinamicamente e inicializando o ponteiro topo apontando para NULL, categorizando a pilha como vazia.
Pilha * criarPilha(){
	Pilha * pilha = (Pilha *)malloc(sizeof(Pilha));
	pilha -> topo = NULL;
	return pilha;
}

//Função para adicionar um elemento no topo da pilha, topo este que agora passa a apontar para um novo elemento do tipo Nodo.
void push(Pilha * pilha, int n){
	Nodo * novo = (Nodo *)malloc(sizeof(Nodo));
	novo -> numero = n;
	novo -> proximo = pilha -> topo;
	pilha -> topo = novo;
}

//Função para remover o elemento do topo da pilha, retornando o valor deste elemento e fazendo o ponteiro topo apontar para o próximo elemento.
int pop(Pilha * pilha){
	if (pilha->topo == NULL) {
		return -1; // Pilha vazia, retorna um valor indicador 
	}
	Nodo * aux = pilha -> topo;
	int resultado = aux -> numero;
	pilha -> topo = aux -> proximo;
	free(aux);
	return resultado;
}

//Função para verificar se a pilha está vazia.
bool vazia(Pilha * pilha){
	return (pilha -> topo == NULL);
	//Se for true, retornará um número maior que zero, ou seja, a pilha está vazia.
}

//Função para esvaziar a pilha.
void esvaziar(Pilha * pilha){
	while(!vazia(pilha)){
		pop(pilha);
	}
}

//Função para liberar a memória alocada para a pilha.
void destruir(Pilha * pilha){
	if(pilha == NULL) return;
	esvaziar(pilha);
	free(pilha);
}












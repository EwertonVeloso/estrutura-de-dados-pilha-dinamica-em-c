#ifndef PILHA_H
#define PILHA_H

#include<stdio.h>
#include<stdbool.h>

//Criando o registro do tipo Nodo, ao qual um ponteiro "proximo" aponta para um outro registro do tipo Nodo.
typedef struct nodo {
	int numero;
	struct Nodo * proximo;
}Nodo;

//Criando o registro pilha, que contém um ponteiro chamado "topo", que aponta para um registro do tipo Nodo.
typedef struct{
	nodo * topo
}Pilha;

//Protótipos das funções para criação e manipulação da pilha
Pilha * criarPilha(void);
void push(Pilha * pilha, int n);
int pop(Pilha * pilha);
bool vazia(Pilha * pilha);
void esvaziar(Pilha * pilha);
void destruir(Pilha * pilha);

#endif 


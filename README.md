Olá! Apresento uma implementação do tipo abstrato de dado pilha, em C

Uma pilha é uma coleção de elementos que são inseridos de acordo com o princípio LIFO (Last In, First Out), que significa que o último elemento a entrar é o primeiro a sair.

Exemplo de uso da pilha:

Uma pilha pode ser usada em um navegador web, para armazenar e recuperar o histórico de visualização das páginas! Ou seja, a pilha contém os endereços web das páginas visitadas, quando a primeira página é visitada, a pilha está vazia. Quando a segunda página é carregada, o endereço da primeira página é inserido na pilha. Da mesma forma, quando a terceira página for carregada, o endereço da segunda página será empilhado. 

Ao clicarmos em "voltar", o endereço do topo é desempilhado, e o navegador carrega essa página.

Essa é uma implementação baseada em lista encadeada, que aloca memórica dinamicamente. Todo o código está comentado, para que seja limpo e bem compreensível. Divirta-se.
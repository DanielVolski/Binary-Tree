/* Algoritmos e estrtura de dados II
 * Implementação de uma estrutura de árvore binária
 * junto de suas principais funções. Desenvolvido
 * apenas para estudos na disciplina de AEDII 
 */

#include <stdio.h>
#include <malloc.h>

// Estrutura básica de um nó da árvore binária
typedef struct tree_node
{
    int value;
    struct tree_node *right;
    struct tree_node *left;
} tree_node;

// Função responsável pela incialização da árvore
tree_node* init_binary_tree(tree_node *node)
{
    node = NULL;
    return node;
}

// Função para a inserção de novos nós na árvore binária
tree_node* insert_in_binary_tree(tree_node *node, int value)
{
    if (node == NULL)
    {
        tree_node *new_node = (tree_node*) malloc(sizeof(tree_node));
        new_node->value = value;
        new_node->left = NULL;
        new_node->right = NULL;
        node = new_node;
    }
    else
    {
        if (node->value < value)
            node->right = insert_in_binary_tree(node->right, value);
        else
            node->left = insert_in_binary_tree(node->left, value);
    }
    return node;
}
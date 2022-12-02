#include <stdio.h>
#include "binary_tree.h"

int main()
{
    tree_node *root = init_binary_tree(root);
    root = insert_in_binary_tree(root, 2);
    root = insert_in_binary_tree(root, 1);
    root = insert_in_binary_tree(root, 3);

    // Deve imprimir 2
    printf("%d\n", root->value);
    // Deve imprimir 1
    printf("%d\n", root->left->value);
    // Deve imprimir 3
    printf("%d\n", root->right->value);

    // Imprime os endereços dos nós da árvore
    printf("%p\n", root);
    printf("%p\n", root->left);
    printf("%p\n", root->right);

    // Deve imprimir os mesmos endereços listados acima
    printf("%p\n", search_in_binary_tree(root, 2));
    printf("%p\n", search_in_binary_tree(root, 1));
    printf("%p\n", search_in_binary_tree(root, 3));

    // Não deve retornar nada
    printf("teste %p\n", search_in_binary_tree(root, 4));
}
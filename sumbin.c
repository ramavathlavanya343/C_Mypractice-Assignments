/*
Name:
Date:
Description:Sum of binary tree pair nodes
Sample Input:In-order traversal of the binary tree: 3 5 7 10 15 
Sum of all pairs of nodes: 150

Sample Output:
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert nodes in the binary tree
Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Helper function to count nodes in the binary tree
int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Helper function to store nodes in an array (in-order traversal)
void storeNodes(Node* root, int* arr, int* index) {
    if (root == NULL) return;
    storeNodes(root->left, arr, index);
    arr[(*index)++] = root->data;
    storeNodes(root->right, arr, index);
}

// Function to calculate the sum of all pairs of nodes
int sumOfPairs(Node* root) {
    if (root == NULL) return 0;

    // Count the total number of nodes
    int nodeCount = countNodes(root);

    // Create an array to store node values
    int* nodeValues = (int*)malloc(nodeCount * sizeof(int));
    if (nodeValues == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    int index = 0;
    storeNodes(root, nodeValues, &index);

    // Calculate the sum of all pairs
    int sum = 0;
    for (int i = 0; i < nodeCount; i++) {
        for (int j = i + 1; j < nodeCount; j++) {
            sum += (nodeValues[i] + nodeValues[j]);
        }
    }

    // Free the allocated memory
    free(nodeValues);

    return sum;
}

// Function to print the binary tree (in-order traversal)
void inOrderTraversal(Node* root) {
    if (root == NULL) return;
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

// Main function
int main() {
    Node* root = NULL;

    // Insert nodes into the binary tree
    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 3);
    root = insertNode(root, 7);

    printf("In-order traversal of the binary tree: ");
    inOrderTraversal(root);
    printf("\n");

    int result = sumOfPairs(root);
    printf("Sum of all pairs of nodes: %d\n", result);

    return 0;
}


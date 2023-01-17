#include <iostream>
#include <fstream>
using namespace std;

struct Material{
    string id;
    int number;
    float price;
    Material *left;
    Material *right;
};

void add(Material *&root, string id, int number, float price){
    if(root == NULL){
        root = new Material;
        root->id = id;
        root->number = number;
        root->price = price;
        root->left = NULL;
        root->right = NULL;
    }
    else{
        if(id < root->id){
            add(root->left, id, number, price);
        }
        else{
            add(root->right, id, number, price);
        }
    }
}

void print(Material *root){
    if(root != NULL){
        print(root->left);
        cout << root->id << " " << root->number << " " << root->price << endl;
        print(root->right);
    }
}


int main() {
    Material *root = NULL;
    ifstream file("material.txt");
    string id;
    int number;
    float price;
    while(file >> id >> number >> price){
        add(root, id, number, price);
    }
    print(root);
    
  
    return 0;
}
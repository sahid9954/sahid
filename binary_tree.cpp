#include<stdio.h>>/bitsc++.h>
using namespace std;

public class BinaryTreesYT{
   static class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data=data;
        this.left=null;
        this.right=null;
    }
   }
   static class binaryTree{
    static int idx=-1;
    public static Node builtTree(int nodes[]){
         idx++;
         Node newNode=new Node(nodes[idx]);
         newNode.left=builtTree(nodes);
         newNode.right=builtTree(nodes);
         return newNode;
    }
   }
   public static void main(string args[]){
    int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node root=tree.builtTree(nodes);
    system.out.println(root.data);t
   }
}
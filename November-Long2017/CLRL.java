import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	
	class Node {
        int key;
        Node left, right;
 
        public Node(int item) {
            key = item;
            left = right = null;
        }
    }
    Node root;
    Ideone() { 
        root = null; 
    }
   void insert(int key) {
       root = insertRec(root, key);
    }
    Node insertRec(Node root, int key) {
        if (root == null) {
            root = new Node(key);
            return root;
        }
        if (key < root.key)
            root.left = insertRec(root.left, key);
        else if (key > root.key)
            root.right = insertRec(root.right, key);
        return root;
    }
     int getLeafCount() 
    {
        return getLeafCount(root);
    }
  
    int getLeafCount(Node node) 
    {
       int count = 0;	
        if (node == null)
            return 0;
        if (node.left != null && node.right != null)
            return 1 + getLeafCount(node.left) + getLeafCount(node.right);
        else
            return getLeafCount(node.left) + getLeafCount(node.right);
            
    }
	public static void main (String[] args) throws java.lang.Exception
	{
	
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t!=0){
		  int a,count;
		  Ideone tree =  new Ideone();
		  int n = s.nextInt();
		  int x = s.nextInt();
		  for(int i=0;i<n;i++){
		  	a = s.nextInt();
		  	tree.insert(a);
		  }
			count = tree.getLeafCount();
			if(count == 0)
			System.out.println("YES");
			else
			System.out.println("NO");
			--t;
		}
	}
} 

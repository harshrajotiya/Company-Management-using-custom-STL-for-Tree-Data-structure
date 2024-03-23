#include <iostream>
#include <unordered_map>
#include "head.h"
using namespace std;
node * bs=NULL;
int *tree;
int *tree2;
int main()
{
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<bold_on<<"                GOOD MORNING USER ! "<<bold_off<<endl<<endl;

	int ch = 1;
	int count = 0;
	unordered_map <int,node*> s;

	cout<<bold_on<<"-----------FUNCTION IN MY STL OF TREE----------- "<<bold_off<<endl<<endl;

		cout<<"1.Create a tree "<<endl;
		cout<<"2.Print Preorder"<<endl;
		cout<<"3.Visualize your tree in realtime  "<<endl;
		cout<<"4.Print Postorder tree "<<endl;
		cout<<"5.Print Inorder tree "<<endl;
		cout<<"6.Height of a tree "<<endl;
		cout<<"7.Print the kth level of a tree "<<endl;
		cout<<"8.Print the Level Order traversal (in O(n^2) )"<<endl;
		cout<<"9.Print the Level Order in one line (in O(n) ) "<<endl;
		cout<<"10.Print the level Order with every level in next line (in O(n) ) "<<endl;
		cout<<"11.Count the Number of Nodes in a tree"<<endl;
		cout<<"12.Count the Number of Edges in a tree"<<endl;
		cout<<"13.Print the Sum of all node in a tree"<<endl;
		cout<<"14.Print the diameter of a tree (in o(n^2)) "<<endl;
		cout<<"15.Print the diameter of a tree (in O(n)) "<<endl;
		cout<<"16.Change every node by its child sum "<<endl;
		cout<<"17.Check Height Balance tree or not (in O(n^2)) "<<endl;
		cout<<"18.Check Height Balance tree or not (in O(n)) "<<endl;
		cout<<"19.Bulid a Height Balanced tree "<<endl;
		cout<<"20.Left view of a tree "<<endl;
		cout<<"21.Right view of a tree "<<endl;
		cout<<"22.Top view of a tree "<<endl;
		cout<<"23.Create a tree using Inorder and Preorder "<<endl;
		cout<<"24.Print node at k distance from target node in subtree "<<endl;
		cout<<"25.Print node at k distance from target node in whole tree "<<endl;
		cout<<"26.Check for Identical trees "<<endl;
		cout<<"27.Check for Structurally Identical trees "<<endl;
		cout<<"28.Print the tree in zig zag way "<<endl;
		cout<<"29.Find the minimum element of bst "<<endl;
		cout<<"30.Find the maximum element of bst "<<endl;
		cout<<"31.Insert in bst "<<endl;
		cout<<"32.Delete in bst "<<endl;
		cout<<"33.Search in bst "<<endl;
		cout<<"34.Build a segment tree from array (min tree)"<<endl;
		cout<<"35.Return a minimum element in the range "<<endl;
		cout<<"36.Build a segment tree from array (max tree)"<<endl;
		cout<<"37.Return a maximum element in the range "<<endl;
		cout<<"38.Update a given node in the segmentation tree "<<endl;
		cout<<"39.Update the given range in the segmentation tree "<<endl;
		cout<<"40.Exit "<<endl;

	cout<<"----------------------------------------------------------------------------"<<endl;
	while(ch!=40)
	{
		cout<<bold_on<<"Enter Number corresponding to choice of Operation or Enter 40 to Exit !!"<<bold_off<<endl;
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter tree in preorder format with value -1 for NULL nodes  !!"<<endl;
			node * root = buildtree();
			if(root==NULL)
			continue;
			count++;
			s[count] = root;
			cout<<"Tree is built with "<<bold_on<<"id = "<<count<<bold_off<<endl;
		}
		if(ch==2)
		{
			if(count==0){cout<<" No tree is built"<<endl; continue;}
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			printInPreOrder(s[d]);
			
		}
		if(ch==3)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<endl;
			Beautify(s[d]);
		}
		if(ch==4)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			printInPost(s[d]);
		}
		if(ch==5)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			printinorder(s[d]);
		}
		if(ch==6)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<height(s[d]);
		}
		if(ch==7)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			int k;
			cout<<"Enter the level = ";
			cin>>k;
			cout<<endl;
			levelOrderHeight(s[d],k);
		}
		if(ch==8)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			levelordercall(s[d]);
		}
		if(ch==9)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			levelorderusingQueue(s[d]);
		}
		if(ch==10)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			levelorderPerfect(s[d]);
		}
		if(ch==11)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Number of nodes = "<<countNode(s[d])-1;
		}
		if(ch==12)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Number of Edges = "<<countNode(s[d]);
		}
		if(ch==13)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Sum of all the nodes = "<<sumOfAllNodes(s[d]);
		}
		if(ch==14)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Diameter of tree in (O(n^2)) = "<<diameterinOn2(s[d]);
		}
		if(ch==15)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Diameter of tree in O(n) = "<<diameterOfTreeOpt(s[d]).diameter;
		}
		if(ch==16)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Changed all the nodes by its child node sum";
			nodeBychildNode(s[d]);
		}
		if(ch==17)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Computed in O(n^2) !"<<endl;
			if(isBalance(s[d]))
			{
				cout<<"Height Balanced Tree !";
			}
			else cout<<"Not A Height Balanced Tree !";
		}
		if(ch==18)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Computed in O(n) !"<<endl;
			if(isBalanceOpt(s[d]).balance)
			{
				cout<<"Height Balanced Tree !";
			}
			else cout<<"Not A Height Balanced Tree !";
		}
		if(ch==19)
		{
			int n;
			cout<<"Number of elements in tree = ";
			cin>>n;
			cout<<"Enter tree elements !!"<<endl;
			int a[n];
			for(int i=0;i<n;++i)
			cin>>a[i];
			node * root = buildHeightBalancedaTree(a,0,n-1);
			count++;
			s[count] = root;
			cout<<"Tree is built with id = "<<count<<endl;
		}
		if(ch==20)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Left View = "<<endl;
			leftView(s[d]);
		}
		if(ch==21)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Right View = "<<endl;
			rightView(s[d]);
		}
		if(ch==22)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Top View = "<<endl;
			treeTopViewleft(s[d]);
			treeTopViewRight(s[d],s[d]);
		}
		if(ch==23)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			cout<<"Enter Number of elements in Inorder = ";
			int inn;
			cin>>inn;
			int ino[inn];
			cout<<"Enter Inorder = ";
			for(int i=0;i<inn;++i)
			cin >> ino[i];

			cout<<"Enter Number of elements in Preorder = ";
			int ipnn;
			cin>>ipnn;
			int pn[inn];
			cout<<"Enter Preorder = ";
			for(int i=0;i<ipnn;++i)
			cin>>pn[i];

			node * root=createTreeUsingOrders(ino,pn,0,inn-1);
			count++;
			s[count] = root;
			cout<<"Tree is built with id = "<<count<<endl;
		}
		if(ch==24)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			int k;
			cout<<"Enter the value of k = ";
			cin>>k; 
			cout<<"Nodes at k distance in subtree = "<<endl;
			nodeAtKinSub(s[d],k);
		}
		if(ch==25)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree id = ";
			int d;
			cin>>d;
			node * target;
			cout<<"Enter the node val =";
			cin>>target->data;
			int k;
			cout<<"Enter the value of k = ";
			cin>>k; 
			cout<<"Nodes at k distance in subtree = "<<endl;
			nodeAtKDis(s[d],target,k);
		}
		if(ch==26)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree ids = ";
			int d;
			cin>>d;
			int a;
			cin>>a;
			if(areTreeidentical(s[d],s[a]))
			{
				cout<<"Identical Trees !";
			}
			else cout<<"Not Identical Trees !";
		}
		if(ch==27)
		{
			if(count==0){cout<<"No tree is built"<<endl; continue;}
			cout<<"Enter tree ids = ";
			int d;
			cin>>d;
			int a;
			cin>>a;
			if(areTreesStructurallyIdentical(s[d],s[a]))
			{
				cout<<"Structurally Identical Trees !";
			}
			else cout<<"Not Structurally Identical Trees !";
		}
		if(ch==28)
		{
			if(count==0){cout<<" No tree is built"<<endl; continue;}
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			printZigZag(s[d]);
		}
		if(ch==29)
		{
			if(count==0){cout<<" No tree is built"<<endl; continue;}
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			node * ans=FindMin(s[d]);
			cout<<"Minimum element = "<<ans->data;
		}
		if(ch==30)
		{
			if(count==0){cout<<" No tree is built"<<endl; continue;}
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			node * ans=FindMax(s[d]);
			cout<<"Maximum element = "<<ans->data;
		}

		if(ch==31)
		{
			count++;
			s[count]=bs;
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			int val;
			cout<<"Enter any value to insert in bst ";
			cin>>val;
			bs=Insert(bs,val);
		}
		if(ch==32)
		{
			if(s[count]==NULL){cout<<" No bst is built"<<endl; continue;}
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			int val;
			cout<<"Enter any value to Delete in bst ";
			cin>>val;
			bs=Delet(bs,val);
		}
		if(ch==33)
		{
			if(s[count]==NULL){cout<<" No bst is built"<<endl; continue;}
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			int val;
			cout<<"Enter any value to Search in bst ";
			cin>>val;
			bs=Find(bs,val);
		}
		if(ch==34)
		{
			count++;
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			int n;
			cout<<"Enter Number of elements in segment tree = ";
			cin>>n;
			cout<<endl;
			cout<<"Enter the elements in segment tree = ";
			int seg1[n];
			for(int i=0;i<n;++i)
			cin>>seg1[i];
			cout<<endl;
			buildTree1(tree,seg1,0,0,n-1);
			cout<<"Successful Operation ! ";
		}
		if(ch==35)
		{
			count++;
			cout<<" Enter Number of element"<<endl;
			int n;
			cin>>n;
			int qs,qe;
			cout<<"Enter the range ";
			cin>>qs>>qe;
			cout<<"Min element in the given range = "<<query1(tree,0,0,n-1,qs,qe);
			cout<<"Successful Operation ! ";
		}
		if(ch==36)
		{
			count++;
			cout<<" Enter tree id"<<endl;
			int d;
			cin>>d;
			int n;
			cout<<"Enter Number of elements in segment tree = ";
			cin>>n;
			cout<<endl;
			cout<<"Enter the elements in segment tree = ";
			int seg2[n];
			for(int i=0;i<n;++i)
			cin>>seg2[i];
			cout<<endl;
			buildTree2(tree2,seg2,0,0,n-1);
			cout<<"Successful Operation ! ";
		}
		if(ch==37)
		{
			count++;
			cout<<" Enter Number of element"<<endl;
			int n;
			cin>>n;
			int qs,qe;
			cout<<"Enter the range ";
			cin>>qs>>qe;
			cout<<"Max element in the given range = "<<query2(tree,0,0,n-1,qs,qe);
			cout<<"Successful Operation ! ";
		}
		if(ch==38)
		{
			count++;
			cout<<"Enter Number of element"<<endl;
			int n;
			cin>>n;
			int i;
			cout<<"Enter the index ";
			cin>>i;
			int v;
			cout<<"Enter incremention value = ";
			cin>>v;
			int h;
			cout<<"1.Min segment tree "<<endl;
			cout<<"2.Max segment tree "<<endl;
			cin>>h;
			if(h==1)
			{
				updateNode(tree,0,0,n-1,i,v);
			}
			else updateNode(tree2,0,0,n-1,i,v);
			cout<<"Successful Operation ! ";
		}
		if(ch==39)
		{
			count++;
			cout<<"Enter Number of element"<<endl;
			int n;
			cin>>n;
			int qs,qe;
			cout<<"Enter the range ";
			cin>>qs>>qe;
			int v;
			cout<<"Enter incremention value = ";
			cin>>v;
			int h;
			cout<<"1.Min segment tree "<<endl;
			cout<<"2.Max segment tree "<<endl;
			cin>>h;
			if(h==1)
			{
				updateRange(tree,0,0,n-1,qs,qe,v);
			}
			else updateRange(tree2,0,0,n-1,qs,qe,v);
			cout<<"Successful Operation ! ";
		}
		if(ch==40)
		{
			cout<<"Thank You User ! "<<endl;
			cout<<"HAVE A GOOD DAY :)"<<endl;
			return 0;
		}
		cout<<endl;
	}
	return 0;
}


///  #include "github.com/xxx/add.h"
////  https://godbolt.org/z/Pv0K0c

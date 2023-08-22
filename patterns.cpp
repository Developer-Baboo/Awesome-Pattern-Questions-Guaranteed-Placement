#include <iostream>
using namespace std;

int main() {
	// This printing rectangle
//  int row, col;
//  cin>>row>>col;
//  for(int i = 1;i<=row; i++){
//  	for(int j = 1;j<=col;j++){
//  		cout<<"*";
//	  }
//	  cout<<endl;
//  }

//Hollow Recntagle Pattern

//int row, col;
//cin>>row>>col;
//for(int i = 1; i<=row; i++){
//	for(int j =1;j<=col; j++){
//		if(i==1 || i==row || j==1 || j==col ){
//			cout<<"*";
//		}else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}


//Inverted Half Pyramid

//int n;
//cin>>n;
//for(int i = n; i>=1; i--){
//	for(int j =1; j<=i;j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//Half Pyramid After 180 Degree Rotation
//int n;
//cin>>n;
//for(int i = 1; i<=n; i++ ){
//	for(int j = 1; j<=n; j++){
//		if(j<=n-i){ //n = 10, i = 1
//			cout<<"  ";
//		}else{
//			cout<<"* ";
//		}
//	}
//	cout<<endl;
//}

//Half Pyramidn Using number

//int n;
//cin>>n;
//for(int i = 1; i<=n; i++){
//	for(int j=1; j<=i;j++ ){
//		cout<<i<<" ";
//	}cout<<endl;
//}

//Floyd's Triangle
//int n;
//cin>>n;
//int count = 1;
//for(int i =1; i<=n; i++){
//	for(int j = 1; j<=i; j++){
//		cout<<count<<" ";
//		count++;
//	}
//	cout<<endl;
//}

// Butterfuly Pattern

//int n = 4;
//cin>>n;
//for(int i =1;i<=n; i++){
//	for(int j =1; j<=i; j++){
//		cout<<"*";
//	}
//	int space =2*n-2*i;
//	for(int j =1; j<=space; j++){
//		cout<<" ";
//	}
//	for(int j =1; j<=i; j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}
//for(int i =n;i>=1; i--){
//	for(int j =1; j<=i; j++){
//		cout<<"*";
//	}
//	int space =2*n-2*i;
//	for(int j =1; j<=space; j++){
//		cout<<" ";
//	}
//	for(int j =1; j<=i; j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//Inverted pattern

//int n;
//cin>>n;
//
//for(int i =1; i<=n; i++){
//	for(int j =1; j<=n+1-i; j++){
//		cout<<j<<" ";
//	}
//	cout<<endl;
//}


//0-1 Pattern
int n;
cin>>n;
for(int i =1; i<=n; i++){
	for(int j =1; j<=i; j++){
		if((j+i)%2 ==0 ){
			cout<<" 1";
		}
		else{
			cout<<" 0";
		}
	}
	cout<<endl;
}	






return 0;
}





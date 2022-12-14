#include<iostream>

using namespace std;

int main(){
    float mat[10][10], fact, pivot;
    int n;

    cout<<"Enter number of equations: "; cin>>n;
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n+1;j++){
            cout<<"A"<<i+1<<j+1<<":"; cin>>mat[i][j];
        }
    }
    for(int k=0; k<n; k++){
	        pivot = mat[k][k];
	        
			for(int j=0;j<n+1;j++){
	            mat[k][j] = mat[k][j]/pivot;
	        }
        
			for (int i=0; i<n; i++){
				fact = mat[i][k];
				
				if(i != k){
					for(int j=0; j<n+1; j++){
	                    mat[i][j]= mat[i][j]-fact*mat[k][j];
	                }
            	}
        	}
        	
    }

    for(int i=0; i<n; i++){
        cout<<mat[i][n+1]<<endl;
    }
    
    return 0;
}

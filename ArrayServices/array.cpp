








		cin>> target;
		searchArray(a,size,target);
		break;

			}

		}
	}//ends switch
}while(choice!=0);
return 0;

}
void fillArray(int a[], int size){
	//fills array with random numbers
	srand( (unsigned) time(NULL)); // seeds random number generator with clock time 
	for(int i=0;i<size;i++)
			a[i]=rand()%100;
}

void printArray(int a[], int size){
	//have to loop 50 times
	for(int i=0;i<size;i++)
			cout << a[i] << " ";
		cout << endl;

}

void sort Array(int a[], int size){
	//cout << "inside sortArray/n";


}



void sortArray(int a[], int n){
	//bubble sort
	for(int pass=0; pass < n-1; pass++){
		for(int comp=0; comp < n-1-pass; comp++){
			if(a[comp]>a[comp+1]){
				int temp=a[comp];
				a[comp] = a[comp+1];
				a[comp+1] = temp;
			}
		}
	
	}
}

	int searchArray(int a[], int size, int target){
	//returns lowest index i with a[i]=target
	// returns -1 if target not found
		for(int i=0;i<size;i++)[
			if(a[i]==target)
				return i;
	}

		
		
		return -1;


	//cout <<"inside searchArray/n";
}
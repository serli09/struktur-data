#include <iostream>
 
using namespace std;

void Merge(int *a, int kecil, int besar, int tengah)
{
	
	int i, j, k, temp[besar-kecil+1];
	i = kecil;
	k = 0;
	j = tengah+ 1;
 
	
	while (i <= tengah && j <= besar)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	
	while (i <= tengah)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	
	while (j <= besar)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	
	for (i = kecil; i <= besar; i++)
	{
		a[i] = temp[i-kecil];
	}
}
 
void MergeSort(int *a, int kecil, int besar)
{
	int tengah;
	if (kecil< besar)
	{
		tengah=(kecil+besar)/2;
		
		MergeSort(a, kecil, tengah);
		MergeSort(a, tengah+1, besar);
 
		
		Merge(a, kecil, besar, tengah);
	}
}
 
int main()
{
	int n, i;
	cout<<"\nmasukkan jumlah element yg akan diurutkan :";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"masukkan elemen "<<i+1<<": ";
		cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);
 
	
	cout<<"\ndata yg diurutkan :";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}


int n=0;
int arr[100];
bool place(int i)		//�ж��ܲ��ܷ��õ�N���ʺ�
{
	for(int j=0;j<i;j++)
		if(arr[j]==arr[i]||abs(arr[j]-arr[i])==abs(j-i))
			return false;
	return true;
}
int queue(int n)
{
	int solution=0;
	for(int i=0;i<n;i++)
		arr[i]=0;
	int k=1;
	while(k>=0)
	{
		while(!place(k)&&k<n)			//���õ�N���ʺ�
			arr[k]=arr[k]+1;
		if(arr[k]<n&&k==n-1)				//�������һ��
		{
			solution++;
			arr[k]=arr[k]+1;
		}
		else if(arr[k]<n&&k<n-1)			//������һ���ʺ�
		{
			k=k+1;
			arr[k]=-1;
		}
		else								//��ǰ�ʺ�û�к��ʵ�λ��
		{
			arr[k]=0;
			k=k-1;
			arr[k]=arr[k]+1;
		}
	}
	
	return solution;
}
void main()
{
	while(1)
	{
		cout<<"Please input the queue number:"<<endl;
		cin>>n;
		if(n==-1)
			break;
		int x=queue(n);
		cout<<x<<" solution(s)"<<endl;
	}
	system("pause");
}



void foo()
{
	int arr[4]{};
	int v = arr[4]; // C6201, C6385 
	arr[4] = 2;     // C6201, C6386 

	int x;
	int* py = nullptr;
	int y = *py;    // C6011 
	int new = *py;    // C6011 
	y += x;         // C6001 
}
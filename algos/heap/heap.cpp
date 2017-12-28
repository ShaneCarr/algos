using namespace std;

void MaxHeapIfy(int a*, int i, int size)
{
    int j, temp;

    // store value of a at current position.  
    temp = a[i];

    // left child: 2*i
    // right child: 2*i +1
    //
    // left child
    j = 2 * i;
    
    // if there is a right child.
    if( j < size && a[j+i] > a[j])
    {

    }
}

using namespace std;

void MaxHeapIfy(int *a, int i, int size)
{
    int j, temp;

    // store value of a at current position.  
    temp = a[i];

    // this part is about gett the right child:
    // left child: 2*i
    // right child: 2*i +1
    //
    // left child
    j = 2 * i;
    
    while(j < size)
    {
        // Part 1: pick L/R
        // if there is a right child.
        if( j < size && a[j+i] > a[j])
        {
            j = j + 1;
        }

        // check if the current item is already bigger than or eq if any
        if(temp > a[j])
        {
            break;
        }
      
        // Part 2: shift up until we find a spot for temp.
        // if temp is smaler that the largest node
        if (temp <= a[j])
        {
            // overwrite teh parent with the largest child. 
            // in this first pass we'll lose temp (a[i]) but at the end we'll 
            // insert it back in
            
            // set current root to largest child
            a[j/2] = a[j];

            // move current to child of largest child
            j = 2*j;
        }
       
    }
    
    // set the largest child to temp which was the original
    a[j/2] = temp;
    return;
}

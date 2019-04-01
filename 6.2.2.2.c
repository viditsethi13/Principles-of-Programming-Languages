#include <stdio.h>
#include <stdbool.h>
int destinationCount (int array[], int numberOfElements)
{
    int count = 0, i;
    for ( i = 1; i <= numberOfElements; ++i )
        if ( array[i] == 3 )
            ++count;
    return count;
}
int main (void)
{ 
    int numberOfDisks, i, smallestDir, moveCount = 0,topDisk[4],rodFrom, rodTo, disk,temp;  
    bool everyOtherMove = false;
    printf ("\nnumber of disks? ");
    scanf ("%i", &numberOfDisks);
    int rod[numberOfDisks + 1];
    for ( i = 1; i <= numberOfDisks; ++i )
        rod[i] = 1;
    if ( (numberOfDisks & 1) == 0 )
        smallestDir = 1;
    else
        smallestDir = -1;    
    printf("\nsolution\n");
    do 
	{
        ++moveCount;
        if ( ! everyOtherMove ) 
		{
            rodFrom = rod[1];
            rodTo = rodFrom + smallestDir;
            if ( rodTo > 3 )
                rodTo = 1;
            if ( rodTo < 1 )
                rodTo = 3;
            disk = 1;
        }
        else 
		{
            for ( i = 1; i <= 3; ++i )
                topDisk[i] = numberOfDisks + 1;
            for ( i = numberOfDisks; i >= 1; --i )
                topDisk[rod[i]] = i;            
            switch ( rod[1] )
            {
                case 1:
                    rodFrom = 2;
                    rodTo = 3;
                    break;
                case 2:
                    rodFrom = 1;
                    rodTo = 3;
                    break;
                case 3:
                    rodFrom = 1;
                    rodTo = 2;
                   break;
                default:
                    printf ("error");
                    break;
            }            
            if ( topDisk[rodFrom] > topDisk[rodTo] ) 
			{
                temp = rodFrom;
                rodFrom = rodTo;
                rodTo = temp;            
            }
            disk = topDisk[rodFrom]; 
        }    
        printf ("%i: disk %i rod %c to rod %c\n", moveCount, disk, 
                 rodFrom + 64, rodTo + 64);
        rod[disk] = rodTo;
        everyOtherMove = ! everyOtherMove;
    }
    while ( destinationCount (rod, numberOfDisks) != numberOfDisks );
}  

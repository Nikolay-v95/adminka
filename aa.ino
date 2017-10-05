
#include <iostream>
#include <math.h>

int main()
{
    for( float k = 0; k < 1000; k++ )
    {
        float sum = 0;
        for( float s = 0; s < 10000000; s++ )
        {
            sum += sin(s+k);
        }
        std::cout<<"sum="<<sum<<std::endl;
    }

    return 0;
}

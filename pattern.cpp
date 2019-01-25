#include<iostream>

using namespace std;

int main()
{
int i, j, space = 1, count = 0;
char c;

for(i = 0; i <= 4; i++)
    {   
        count = 0;
        space = 5*i;

        for(j = i, c = 'A'; j <= 4; j++,c++)
        {
            cout<<c<<" ";
            ++count;

            if(j ==4)
            {
                if(c == 'E')
                    c = 'D';
                while(space != 0)
                {
                    cout<<" ";
                    --space;
                }
               // cout<<count;
                for(int temp = 0; temp < count; ++temp,c--)
                {
                    cout<<c<<" "; 
                    if(count == 5)
                        --count;
                }
            }
        
        }
        cout<<"\n";   
        space = 1;
    }


}

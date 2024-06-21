///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "





int main ()
{

        int Start, End, sum ;

        cout<<"Enter the starting range number : " ;
        cin>>Start ;
        cout<<"Enter the finishing range number : " ;
        cin>>End ;

        if(Start>End) swap(Start, End) ;

        Start-- ;
        sum = (End*(End+1)/2) - (Start*(Start+1)/2) ;  // { SumRange(1, End) - Sumrange(1 ,Start-1) }

        cout<<"\nThe summation of the range("<<++Start<<", "<<End<<") is : " << sum ;



    return 0 ;
  
}

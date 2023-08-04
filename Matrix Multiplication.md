## Matrix Multiplication :

     i) 1st matrix's 1st row will be multiplied to the each column of 2nd Matrix one after another.
    ii) Then from 1st matrix's 2nd row to the last row will repeat the same process.

<br>

#### For Example :

    M1 = 2*3          M2 = 3*2            // (row*col)
    
    M1 = | 1 2 3 |    M2 = | 3 2 |
         | 4 5 6 |         | 4 4 |
                           |-1 6 |

    M1*M2 = (2*3)   *  (3*2)
          = (2*__)  *  (__*2)    // middle 2 elements will be same
          = 2*2
          
    M1*M2 = | 1.3 + 2.4 + 3.-1    1.2 + 2.4 + 3.6 |
            | 4.3 + 5.4 + 6.-1    4.2 + 5.4 + 6.6 |
     
          = | 3+8-3     2+8+18  |
            | 12+20-6   8+20+36 |

          = | 8   28 |
            | 26  64 |    (ans)

# XYD learning path
## part 1: one dimensional array
- Problem 1 Total Number of intervals
    - This is a classic problem that need to use few time to finish large calculation.
    > The first line is an integer n, representing the total number of cups.

    > The next line is n integers, in order, indicating the amount of water stored in each cup.

    > The next line is an integer m, indicating the number of inquiries.

    > Next, the m line has two integers l and r per line, indicating the interrogation interval, asking for the sum of water storage from the lth cup to the rth cup.
    ```c++
    input:  3
            1 2 3
            1
            1 3
    out:    6
    ```
- Problem 2 Array elements are moved to the right in a loop
    - This is a very interesting problem that need to let element loops to the right.
    > An array A contains N(>0) integers, and without allowing the use of another array, each integer loop is moved to the right M (>=0) positions, that is, the data in A is converted from (A0 A1 AN-1) to (AN-M ... AN-1A0A1 ... AN-M-1) (the last M number is moved to the front M position)
    ```c++
    input:  6 2 
            1 2 3 4 5 6
    out:    5 6 1 2 3 4
    ```
- Problem 3 Caesar encryption
    - This is a old way to encrypt some words or sentence, this is simple verson.
    > Each letter in the message is replaced by the t-letter that follows it. For example: 

    > when t = 4, the encryption rule is to replace the original letter with the 4th letter after the original letter, the fourth letter after the letter "a" is " e " , and "a" is replaced by "e", the fourth letter after the letter "z" is " d " , and " z " is replaced by " d ". 
    > So "China" will be translated as "glmre".
    ```c++
    input:  "antdzyo" 30
    out:    "erxhdcs" 
    ```
- Problem 4 Find first character that appears only once
    - This is a problem ask you to find the first character that appears only once. 
    > Given a string that contains only lowercase letters, please find the first character that appears only once. If not, output no.
    ```c++
    input:  "abcabd"
    out:    "c"
    ```
- Problem 5 Encrypted medical records
    - This is a funny problem that ask you to encrypt medical records. It's just like caesar encryption but a little bit difficult than caesar encryption.
    > All the characters in the original text are circularly shifted three bits to the left by the alphabet

    > Reverse order storage (abcd -> dcba)

    > Case inversion (abXY -> ABxy)
    ```c++
    input:  "GSOOWFASOq"
    out:    "Trvdizrrvj"
    ```
- Problem 6 ISBN code
    - ISBN code is a code that for every official book published. This is a problem which ask you to check if Last number of ISBN code is correct.
    > The format of each ISBN code is "x-xxx-xxxxx-x", for example 0-670-82162-4 is a standard ISBN code. The last digit of the ISBN code is the identification code.  
    >The identification code is calculated as follows:

    >The first digit is multiplied by 1 plus the secondary digit multiplied by 2... With the result mod 11, the resulting remainder is the identification code, and if the remainder is 10, the identification code is the uppercase letter X.  
    > Determine whether the identification code in the entered ISBN number is correct, if it is correct, only "Right" is output; If it is wrong, output the ISBN number that you think is correct.
    ```c++
    input:  0-670-82162-4
    out:    "Right"
    input:  0-670-82162-0
    out:    0-670-82162-4
    ```
## part 2: two dimensional array
- Problem 7 sum of elements at the edges of matrix.
    - This problem is easier than other problem, use your mind to think it.
    > Enter an integer matrix that calculates the sum of the elements located at the edges of the matrix. The elements at the edge of the matrix are the elements of the first and last rows and the elements of the first and last columns.
    ```c++
    input:  3 3
            3 4 1
            3 7 1
            2 0 1
    out:    15
    ```
- Problem 8 Friendly pairs of numbers
    - This a problem ask you to calculate how many pairs of friendly numbers, I don't think It's friendly.
    > Reading in an n*m matrix defines two numbers as friendly if and only if their positions are adjacent (up and down, left and right) and the values are the same. 

    > Find friendly numbers to be paired with numbers.
    ```c++
    input:  5 4
            3 3 3 4
            2 0 0 3
            0 3 1 4
            3 4 3 3
            1 0 3 3
    out:    7
    ```







 


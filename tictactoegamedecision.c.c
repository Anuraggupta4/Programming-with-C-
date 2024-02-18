#include<stdio.h>
int main()
{
    char arr1[3]={'x','o','x'};
    char arr2[3]={'x','o','o'} ;
    char arr3[3]={'o','o','o'};

if(  arr1[0] == 'o' && arr1[1] == 'o' &&  arr1[2] == 'o'  ||
        arr1[0] == 'o' && arr2[1] == 'o' && arr3[2] == 'o' ||
       arr1[2] == 'o' &&  arr2[2] == 'o' && arr3[2] == 'o' ||
       arr3[0] == 'o' &&   arr3[1]  == 'o' &&  arr3[2] == 'o' ||
        arr1[0]  == 'o' &&  arr1[0]  == 'o' &&  arr1[0] == 'o'  ||
        arr1[2]  == 'o' &&  arr2[1] == 'o' &&   arr3[0] == 'o' ||
        arr2[0] == 'o' &&  arr2[1] == 'o' &&   arr3[2] == 'o'
        ){
                printf("O wins the game");
}
else if(arr1[0] == 'x' && arr1[1] == 'x' &&  arr1[2] == 'x' ||
        arr1[0] == 'x' && arr2[1] == 'x' && arr3[2] == 'x' ||
       arr1[2] == 'x' &&  arr2[2] == 'x' && arr3[2] == 'x' ||
       arr3[0] == 'x' &&   arr3[1]  == 'x' &&  arr3[2] == 'x' ||
        arr1[0]  == 'x' &&  arr1[0]  == 'x' &&  arr1[0] == 'x'  ||
        arr1[2]  == 'x' &&  arr2[1] == 'x' &&   arr3[0] == 'x' ||
        arr2[0] == 'x' &&  arr2[1] == 'x' &&   arr3[2] == 'x')
        {
        printf("X wins the game");
}
return 0;
}

// Water tank question LeetCode Q11. 

// CPP
#include <stdio.h>
#include <stdlib.h>
int main()
{
        int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int i = 0;
    int j = 8;

    int maxArea = 0;

    while (i < j)
    {    int h;
        if (arr[i] < arr[j])
        {
            h = arr[i];
        }
        else
        {
            h = arr[j];
        }

          int w = j - i;
        int area = w * h;
        if (area > maxArea)
        {
            maxArea = area;
        }
        if (arr[i] < arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    printf("Max Area = %d", maxArea);
    return 0;
}


// // JAVA

// class Solution {
//     public int maxArea(int[] height) {
//         int i=0; int j=height.length-1;
//         int maxArea=0;
//         int h;

//         while(i<j)
//         {
//             if(height[i]<height[j])
//             {
//                 h=height[i];
//             }
//             else
//             {
//                 h=height[j];
//             }

//             int width=j-i;

//             int area=h*width;

//             if(maxArea<area)
//             {
//                 maxArea=area;
//             }

//             if(height[i]<height[j])
//             {
//                 i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }
//         return maxArea;
//     }
// }
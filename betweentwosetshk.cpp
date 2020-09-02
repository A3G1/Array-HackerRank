import java.io.*; 
import java.util.*; 
import java.text.*;
import java.math.*; 
import java.util.regex.*;

public class Solution {

static int getTotalX(int[] a, int[] b) {

    int i,j,k;
    Vector <Integer> v1 = new Vector <Integer> ();

    for(i=1;i<=b[(b.length-1)];i++)
    {
        int c=0;
        for(j=0;j<b.length;j++)
        {
            if(b[j]%i==0)
            {
                c++;
            }
        }
        if(c==b.length)
        {
        v1.add(i);    
        }
    }
    int c1;
    int c2=0;
    for(k=0;k<v1.size();k++)
    {
        c1=0;
        int a1= v1.get(k);
        for(i=0;i<a.length;i++)
        {
            if(a1%a[i]==0)
            {
                c1++;
            }
        }
        if(c1==a.length)
        {
            c2++;
        }

    }
    return c2;
    // Complete this function
}

public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int m = in.nextInt();
    int[] a = new int[n];
    for(int a_i = 0; a_i < n; a_i++){
        a[a_i] = in.nextInt();
    }
    int[] b = new int[m];
    for(int b_i = 0; b_i < m; b_i++){
        b[b_i] = in.nextInt();
    }
    int total = getTotalX(a, b);
    System.out.println(total);
    in.close();
}}

    

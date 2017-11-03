import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int minimumNumber(int n, String password) {
        // Return the minimum number of characters to make the password strong
        int sp=0,caps=0,lo=0,dig=0,ans=0,len=0;
        //int l = password.length();
        for(int i=0;i<password.length();i++){
            if(Character.isLowerCase(password.charAt(i)))
                lo+=1;
            else if(Character.isUpperCase(password.charAt(i)))
                caps+=1;
            else if(password.charAt(i)=='!' || password.charAt(i)=='@' || password.charAt(i)=='#' || password.charAt(i)=='$' || password.charAt(i)=='%' || password.charAt(i)=='^' || password.charAt(i)=='&' || password.charAt(i)=='*' || password.charAt(i)=='(' || password.charAt(i)==')' || password.charAt(i)=='-' || password.charAt(i)=='+')
                sp+=1;
            else if(Character.isDigit(password.charAt(i)))
                dig+=1;   
        }
       if(lo==0)
           ans+=1;
        if(caps==0)
            ans+=1;
        if(sp==0)
            ans+=1;
        if(dig==0)
            ans+=1;
        if(n<6){
            len = 6-n;
            if(ans < len)
                ans = len;
        }
        
        return ans;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String password = in.next();
        int answer = minimumNumber(n, password);
        System.out.println(answer);
        in.close();
    }
}


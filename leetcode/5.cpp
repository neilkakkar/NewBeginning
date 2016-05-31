
/* Idea : create 2D DP storing whether A[i][j] is palindrome or not.
    Consider for A[i][j] : Check A[i+1][j-1] . If true, and s[i]==s[j], then A[i][j] is palindrome as well!

    Iterate over length and update maxlength as you go.

*/
string longestPalindrome(string s) {
        int slen = s.length();
        int A[slen+1][slen+1]={0};
        int maxlen=1;
        int sind=0;
        for(int i=0;i<slen;i++){
            A[i][i]=1;
            if(s[i]==s[i+1]){
                A[i][i+1]=1;
                sind=i;
                maxlen=2;
            }
        }
        for(int k=3;k<=slen;k++){
            for(int i=0;i<slen-k+1;i++){
                int j=i+k-1;
                if(A[i+1][j-1]==1 && s[i]==s[j]){
                    A[i][j]=1;
                    if(k>maxlen){
                        maxlen=k;
                        sind=i;
                    }
                }
            }
        }


        string r="";
        for(int i=0;i<maxlen;i++){
            r+=s[sind+i];
        }
        return r;

    }

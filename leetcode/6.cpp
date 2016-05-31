
/*
    Ad hoc, but still took me quite a bit of time to solve.

    Probably because I have lost touch with Programming.

    No worries, we are going to climb to the top.


*/


string convert(string s, int numRows) {
        string r="";
        int slen = s.length();
        int j=0;
        if(numRows==1)return s;

        while(j<slen && j>=0){
            r+=s[j];
            j+=2*numRows-2;
        }

        for(int k=2;k<numRows;k++){
            int j=k;
            j--;
            while(j<slen){
                r+=s[j];
                j+=2*(numRows-k);
                if(j<slen){
                    r+=s[j];
                    j+=2*k-2;
                }

            }

        }
        j=numRows-1;
        while(j<slen && j>=0){
            r+=s[j];
            j+=2*numRows-2;
        }
        return r;

    }

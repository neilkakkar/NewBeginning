/*
    AWESOME PART : Reverse integer might overflow!

    Hence, need to figure out a way to output 0 when it overflows....


*/


long long int reverse(long long int x) {
        int negf=0;
        if(x<0){
            negf=1;
            x = -x;
        }
        long long int z=x;
        long long int ans=0;
        while(z>0){
            int temp = z%10;
            z/=10;
            ans=ans*10+temp;
        }
        if(ans>=2147483647)return 0;
        if(negf)return -ans;
        return ans;

    }

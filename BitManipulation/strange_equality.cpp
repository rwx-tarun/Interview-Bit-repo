int Solution::solve(int A) {
    int  a =A;
    int cnt=0;
    while(a)
    {
        a=a&(a-1);
        cnt++;
    }

    cnt = log2(A)+1;
    int y = (1<<cnt);
    int x =0;
    for(int i=0;i<cnt;i++)
    {
        if(A&(1<<i))
            continue;
        x=x^(1<<i);
    }
    return x^y;
}

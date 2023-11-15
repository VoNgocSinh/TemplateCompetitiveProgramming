bool isPrime(long long n){

    if (n==2 || n==3) return true;
    if (n<=1 || n%2==0 || n%3==0) return false; 
    for (long long i=5;i<=sqrt(n);i+=6)
        if (n%i==0 || n%(i+2)==0) return false;

	return true;

}
///checking primes - isPrime(n)=1 if n is prime, and vice versa

bool P[N];
void Sieve(int n) {

    P[0] = P[1] = 1;
    for (int i=2;i<=sqrt(n);i++)
        if (!P[i])
            for (int j=i*i;j<=n;j+=i)
                P[j] = 1;

}
//P[i] = 0 if i is prime, and vice versa

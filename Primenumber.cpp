bool Prime(long long n){

	if (!(n^2) || !(n^3))
		return true;

	if (n<=1 || !(n%2) || !(n%3)) 
		return false;

	for (long long i = 5; i <= sqrt(n); i += 6)
		if (!(n%i) || !(n%(i+2)))
			return false;

	return true;
}

///checking primes

void Elemental_sieve(long long n){

    Es[0] = Es[1] = 1;

    for (int i = 2; i<= sqrt(n); i++)
        if (!Es[i]){

            long long j = i*i;

            while (j<=n)
                Es[j] = 1,j+=i;

        }

}

//Elemental sieve

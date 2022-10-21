bool Prime_number(long long n){

	if (!(n^2) || !(n^3))
		return true;

	if (n<=1 || !(n%2) || !(n%3)) 
		return false;

	for (long long i = 5; i<= sqrt(n); i += 6)
		if (!(n%i) || !(n%(i+2)))
			return false;

	return true;
}

///checking primes

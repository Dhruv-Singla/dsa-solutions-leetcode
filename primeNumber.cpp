bool isPrime(int n)
{
        if (n == 1) {
            return false;
        }
        if (n%2 == 0) {
            return false;
        }
        for (int i = 3; i < sqrt(n); i=i+2) {
        if (n % i == 0) {
        return false;
      }
    }
    return true;
}

//reducing time comlexity from O(n) to O(n^1/2).
//by changing loop termination from n to sqrt(n)

int sumOfAllDivisors(int n) {
    int sumDiv = 0;
    for (int i = 1; i <= n; i++) {
      sumDiv += i * (n / i);
    }
    return sumDiv;
}
//reduced time complexity from O(n^2) to O(n)

int sumOfAllDivisors(int n) {
    int sumDiv = 0;
    while(n) {
        for (int i = 1; i <= (n / 2 + 1); i++) {
            if (n % i == 0) {
                sumDiv += i;
            }
        }
        if (n == 1 || n == 2) {
            n--;
            continue;
        }
        sumDiv += n;
        n--;
    }
    return sumDiv;
}

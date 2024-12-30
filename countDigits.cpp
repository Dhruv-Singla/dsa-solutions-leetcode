int countDigits(int n){
    int num = n; //duplicating n also as num
    int cnt = 0, rem;
    
    while (n > 0) {
        rem = n % 10;
        
        // Skip this iteration if rem is 0
        if (rem == 0) {
            n /= 10;  // Ensure n is reduced
            continue;  // Move to the next iteration
        }
        
        // Check if num is divisible by rem
        if (num % rem == 0) {
            cnt++;
        }
        
        n /= 10;  // Reduce n after each iteration
    }
    
    return cnt; //return int value stored in cnt
}


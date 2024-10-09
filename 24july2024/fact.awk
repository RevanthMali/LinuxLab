BEGIN {
    n = 5;   
    f = 1;
}
{ 
    while (n > 0) {
        f = f * n;  
        n = n - 1; 
    }
}
END {
    print("Factorial:", f);
}


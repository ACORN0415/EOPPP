int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4621[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 72;
    int v2 = 75;
    int v3 = 97;
    int v4 = 37;
    int v5 = 92;
    int v6 = 64;
    int v7 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_4621[i] = v0 + i; }
    v5 = __helper(v5);
    v7 = v7 | v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

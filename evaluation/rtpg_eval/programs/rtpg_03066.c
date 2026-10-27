int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3066[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 19;
    int v2 = 6;
    int v3 = 77;
    int v4 = 94;
    int v5 = 65;
    int v6 = 83;
    int v7 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_3066[i] = v5 + i; }
    v2 = v2 - v0;
    v4 = __helper(v4);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

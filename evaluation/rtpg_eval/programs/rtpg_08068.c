int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8068[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 41;
    int v2 = 50;
    int v3 = 37;
    int v4 = 15;
    int v5 = 79;
    int v6 = 78;
    int i;
    v6 = 10;
    for (i = 0; i < 10; i++) { __arr_8068[i] = v0 + i; }
    for (i = 0; i < 12; i++) {
        v0 = v0 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

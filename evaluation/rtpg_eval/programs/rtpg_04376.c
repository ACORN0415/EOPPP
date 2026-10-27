int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4376[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 6;
    int v2 = 57;
    int v3 = 74;
    int v4 = 20;
    int v5 = 21;
    int v6 = 84;
    int v7 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_4376[i] = v3 + i; }
    for (i = 0; i < 16; i++) {
        v5 = v5 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    v2 = __helper(v2);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

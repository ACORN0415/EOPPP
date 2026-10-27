int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_762[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 34;
    int v2 = 43;
    int v3 = 73;
    int v4 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_762[i] = v0 + i; }
    v4 = v4 - v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v1 = __helper(v1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1042[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 20;
    int v2 = 57;
    int v3 = 35;
    int v4 = 56;
    int v5 = 100;
    int i;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_1042[i] = v5 + i; }
    v2 = v2 - v3;
    v2 = __helper(v2);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

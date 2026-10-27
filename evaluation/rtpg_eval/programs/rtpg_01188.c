int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1188[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 98;
    int v2 = 32;
    int i;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_1188[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

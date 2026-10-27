int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1987[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 11;
    int v2 = 93;
    int v3 = 27;
    int v4 = 100;
    int v5 = 33;
    int v6 = 37;
    int i;
    v4 = 53;
    for (i = 0; i < 10; i++) { __arr_1987[i] = v3 + i; }
    v4 = v4 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

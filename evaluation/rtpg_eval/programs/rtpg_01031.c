int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1031[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 75;
    int v2 = 68;
    int v3 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_1031[i] = v3 + i; }
    v3 = v3 % (v2 + 1);
    v1 = __helper(v1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

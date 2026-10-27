int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2152[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 3;
    int v2 = 8;
    int i;
    v1 = v1 * 9;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_2152[i] = v1 + i; }
    v1 = v1 & v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

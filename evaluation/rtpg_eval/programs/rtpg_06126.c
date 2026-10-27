int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6126[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 21;
    int v2 = 27;
    int v3 = 8;
    int v4 = 85;
    int v5 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_6126[i] = v0 + i; }
    v2 = v2 + v0;
    if (v5 > v3) { v5 = v3; }
    v4 = __helper(v4);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }

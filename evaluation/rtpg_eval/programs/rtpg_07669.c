int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7669[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 96;
    int v2 = 97;
    int v3 = 25;
    int v4 = 52;
    int v5 = 44;
    int i;
    v3 = v3 + v5;
    for (i = 0; i < 10; i++) { __arr_7669[i] = v5 + i; }
    v4 = v4 * 5;
    v3 = __helper(v3);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

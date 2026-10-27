int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6948[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 3;
    int v2 = 25;
    int v3 = 8;
    int i;
    v2 = v2 * 9;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_6948[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v3 = __helper(v3);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }

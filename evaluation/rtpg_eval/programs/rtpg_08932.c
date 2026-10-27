int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8932[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 48;
    int v2 = 21;
    int v3 = 18;
    int v4 = 78;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_8932[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

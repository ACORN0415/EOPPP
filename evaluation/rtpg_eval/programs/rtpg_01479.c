int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1479[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 68;
    int v2 = 29;
    int v3 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_1479[i] = v0 + i; }
    v3 = v3 + v3;
    v2 = __helper(v2);
    v3 = v3 | v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

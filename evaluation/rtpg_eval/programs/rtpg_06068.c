int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6068[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 61;
    int v2 = 45;
    int v3 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_6068[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

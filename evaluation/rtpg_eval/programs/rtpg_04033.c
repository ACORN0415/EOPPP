int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4033[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 48;
    int v2 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_4033[i] = v2 + i; }
    v2 = v2 + v1;
    v1 = v1 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

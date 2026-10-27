int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 96;
    int v2 = 98;
    int v3 = 41;
    int v4 = 50;
    int v5 = 69;
    int v6 = 80;
    int i;
    v2 = v2 + v5;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v6;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

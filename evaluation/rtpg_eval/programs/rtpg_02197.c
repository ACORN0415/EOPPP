int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 85;
    int v1 = 19;
    int v2 = 74;
    int v3 = 33;
    int v4 = 5;
    int v5 = 95;
    int v6 = 100;
    int v7 = 0;
    int i;
    v7 = v7 * 2;
    v5 = __helper(v5);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

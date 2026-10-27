int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 67;
    int v1 = 98;
    int v2 = 81;
    int v3 = 5;
    int v4 = 7;
    int v5 = 81;
    int v6 = 18;
    int i;
    v0 = v0 + v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

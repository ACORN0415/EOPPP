int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 10;
    int v2 = 34;
    int v3 = 69;
    int v4 = 49;
    int v5 = 51;
    int v6 = 85;
    int v7 = 43;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v1 = __helper(v1);
    v7 = v7 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }

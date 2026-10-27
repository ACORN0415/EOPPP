int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 67;
    int v2 = 35;
    int v3 = 98;
    int v4 = 76;
    int v5 = 60;
    int v6 = 29;
    int i;
    v5 = v5 - v4;
    v0 = v0 + v0;
    v1 = v1 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

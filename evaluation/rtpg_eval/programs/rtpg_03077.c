int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 59;
    int v1 = 30;
    int v2 = 90;
    int v3 = 27;
    int v4 = 35;
    int i;
    v0 = 77;
    if (v0 > v0) { v0 = v0; }
    v2 = __helper(v2);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v3 = v3 | v1;
    return v0;
}
int main(void) { return test_func(); }

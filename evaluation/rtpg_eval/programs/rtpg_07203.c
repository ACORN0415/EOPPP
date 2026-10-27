int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 55;
    int v1 = 12;
    int v2 = 18;
    int i;
    v2 = v2 + v1;
    if (v1 > v2) { v1 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

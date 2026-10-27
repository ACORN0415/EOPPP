int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 30;
    int v2 = 31;
    int v3 = 99;
    int v4 = 81;
    int i;
    v3 = 73;
    if (v1 > v0) { v1 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }

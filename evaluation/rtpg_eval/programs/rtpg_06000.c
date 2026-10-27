int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 57;
    int v1 = 89;
    int v2 = 26;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

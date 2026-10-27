int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 89;
    int v1 = 12;
    int v2 = 0;
    int v3 = 39;
    int v4 = 19;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

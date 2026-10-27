int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 16;
    int v1 = 4;
    int v2 = 31;
    int v3 = 74;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

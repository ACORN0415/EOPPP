int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 12;
    int v1 = 85;
    int v2 = 28;
    int v3 = 97;
    int v4 = 49;
    int v5 = 52;
    int i;
    v0 = v0 + v0;
    v3 = __helper(v3);
    v5 = v5 ^ v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

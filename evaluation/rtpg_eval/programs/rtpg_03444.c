int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 51;
    int v1 = 8;
    int v2 = 98;
    int v3 = 40;
    int v4 = 70;
    int v5 = 75;
    int i;
    v5 = v5 + v5;
    if (v0 > v4) { v0 = v4; }
    v1 = __helper(v1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

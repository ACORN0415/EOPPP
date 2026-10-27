int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1636[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 4;
    int v2 = 16;
    int v3 = 81;
    int v4 = 95;
    int v5 = 0;
    int i;
    v4 = v4 * 6;
    for (i = 0; i < 10; i++) { __arr_1636[i] = v3 + i; }
    v3 = v3 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

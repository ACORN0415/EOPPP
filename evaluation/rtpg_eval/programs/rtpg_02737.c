int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2737[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 95;
    int v2 = 63;
    int v3 = 47;
    int v4 = 79;
    int v5 = 74;
    int v6 = 1;
    int i;
    v5 = v5 - v2;
    for (i = 0; i < 10; i++) { __arr_2737[i] = v2 + i; }
    if (v3 > v4) { v3 = v4; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

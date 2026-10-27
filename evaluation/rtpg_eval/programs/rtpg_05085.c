int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5085[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 76;
    int v2 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_5085[i] = v2 + i; }
    v2 = v2 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

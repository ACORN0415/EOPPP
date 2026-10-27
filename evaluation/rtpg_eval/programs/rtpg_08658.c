int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8658[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 22;
    int v2 = 85;
    int v3 = 84;
    int v4 = 23;
    int v5 = 27;
    int v6 = 87;
    int v7 = 49;
    int i;
    v7 = v7 + v2;
    for (i = 0; i < 10; i++) { __arr_8658[i] = v6 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }

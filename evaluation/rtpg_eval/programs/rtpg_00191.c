int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_191[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 79;
    int v2 = 91;
    int v3 = 47;
    int v4 = 43;
    int v5 = 50;
    int i;
    for (i = 0; i < 10; i++) { __arr_191[i] = v2 + i; }
    v5 = 81;
    v0 = __helper(v0);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

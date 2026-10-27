int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 98;
    int v2 = 81;
    int v3 = 81;
    int v4 = 69;
    int v5 = 58;
    int v6 = 37;
    int v7 = 55;
    int i;
    v0 = 91;
    v5 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

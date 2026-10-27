int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 82;
    int v2 = 27;
    int v3 = 41;
    int v4 = 34;
    int v5 = 66;
    int v6 = 55;
    int v7 = 24;
    int i;
    v0 = v0 * 9;
    v1 = 79;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v6;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v7 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

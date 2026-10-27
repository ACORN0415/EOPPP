int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 68;
    int v2 = 4;
    int v3 = 82;
    int v4 = 70;
    int v5 = 5;
    int i;
    v4 = v4 + v0;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 16; i++) {
        v0 = v0 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

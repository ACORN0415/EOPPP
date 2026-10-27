int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 38;
    int v2 = 30;
    int v3 = 39;
    int v4 = 60;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 * 7;
    v4 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

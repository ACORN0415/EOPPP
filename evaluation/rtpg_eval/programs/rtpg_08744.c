int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 36;
    int v2 = 77;
    int v3 = 46;
    int i;
    v3 = v3 + v2;
    v2 = 18;
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

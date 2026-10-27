int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 5;
    int v2 = 48;
    int v3 = 93;
    int i;
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

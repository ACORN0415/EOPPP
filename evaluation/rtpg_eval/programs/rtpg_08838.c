int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 78;
    int v2 = 46;
    int v3 = 65;
    int v4 = 70;
    int v5 = 59;
    int i;
    if (v3 > v0) { v3 = v0; }
    v4 = v4 + v5;
    v0 = v0 - v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

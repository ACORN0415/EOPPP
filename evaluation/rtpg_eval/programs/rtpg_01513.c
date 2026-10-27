int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 76;
    int v2 = 50;
    int v3 = 58;
    int v4 = 32;
    int v5 = 90;
    int v6 = 98;
    int i;
    v6 = 63;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

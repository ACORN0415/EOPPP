int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 82;
    int v2 = 13;
    int v3 = 92;
    int v4 = 63;
    int v5 = 48;
    int v6 = 25;
    int i;
    v1 = 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

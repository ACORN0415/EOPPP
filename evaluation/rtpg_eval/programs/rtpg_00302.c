int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 0;
    int v2 = 76;
    int v3 = 28;
    int v4 = 74;
    int i;
    v2 = v2 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

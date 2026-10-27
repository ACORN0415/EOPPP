int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 92;
    int v2 = 87;
    int v3 = 26;
    int v4 = 85;
    int i;
    v3 = v3 + v2;
    if (v3 > v0) { v3 = v0; }
    v4 = 83;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

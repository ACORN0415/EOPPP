int __arr_8328[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 88;
    int v2 = 8;
    int v3 = 37;
    int v4 = 16;
    int v5 = 52;
    int i;
    if (v5 > v3) { v5 = v3; }
    for (i = 0; i < 11; i++) {
        v3 = v3 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_8328[i] = v5 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

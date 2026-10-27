int __arr_5923[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 68;
    int v2 = 80;
    int v3 = 7;
    int v4 = 32;
    int v5 = 85;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5923[i] = v2 + i; }
    v4 = 86;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

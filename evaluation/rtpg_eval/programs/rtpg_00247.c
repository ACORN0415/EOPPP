int __arr_247[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 40;
    int v2 = 86;
    int v3 = 14;
    int v4 = 86;
    int v5 = 87;
    int v6 = 4;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 8; i++) {
        v1 = v1 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_247[i] = v6 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

int __arr_4397[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 46;
    int v2 = 27;
    int v3 = 44;
    int v4 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_4397[i] = v4 + i; }
    v3 = __arr_didx[__idx_didx[0]];
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

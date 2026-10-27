int __arr_2226[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 34;
    int v2 = 87;
    int v3 = 22;
    int v4 = 34;
    int v5 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_2226[i] = v1 + i; }
    if (v5 > v1) { v5 = v1; }
    v2 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v5 = v5 | v3;
    return v0;
}
int main(void) { return test_func(); }

int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 2;
    int v2 = 39;
    int v3 = 83;
    int v4 = 14;
    int v5 = 85;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v5;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v4 = __arr_didx[__idx_didx[0]];
    v1 = v1 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }

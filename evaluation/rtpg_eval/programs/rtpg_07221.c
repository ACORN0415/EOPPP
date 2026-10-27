int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 87;
    int v2 = 40;
    int v3 = 39;
    int v4 = 81;
    int v5 = 57;
    int v6 = 82;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v6;
    }
    v4 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

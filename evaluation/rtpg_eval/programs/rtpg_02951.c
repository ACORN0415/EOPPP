int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 26;
    int v2 = 83;
    int v3 = 33;
    int v4 = 5;
    int v5 = 11;
    int v6 = 0;
    int v7 = 38;
    int i;
    if (v2 > v6) { v2 = v6; }
    v4 = v4 * 4;
    v3 = 29;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

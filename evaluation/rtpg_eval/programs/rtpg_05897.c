int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 22;
    int v2 = 72;
    int v3 = 3;
    int v4 = 6;
    int v5 = 47;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    v0 = v0 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

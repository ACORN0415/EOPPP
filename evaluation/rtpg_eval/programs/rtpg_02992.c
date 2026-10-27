int __arr_2992[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 27;
    int v2 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_2992[i] = v1 + i; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

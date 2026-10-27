int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 26;
    int v2 = 93;
    int i;
    v0 = v0 + v2;
    v1 = v1 - v2;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

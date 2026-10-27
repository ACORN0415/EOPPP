int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 2;
    int v2 = 47;
    int v3 = 87;
    int v4 = 38;
    int i;
    if (v3 > v4) { v3 = v4; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v4 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

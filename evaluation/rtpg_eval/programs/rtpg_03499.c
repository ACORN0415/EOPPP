int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 43;
    int v2 = 76;
    int i;
    v2 = v2 * 6;
    if (v2 > v0) { v2 = v0; }
    v2 = v2 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

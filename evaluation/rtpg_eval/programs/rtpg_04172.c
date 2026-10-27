int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 43;
    int v2 = 77;
    int v3 = 67;
    int v4 = 15;
    int v5 = 74;
    int v6 = 13;
    int v7 = 39;
    int i;
    v4 = v4 - v2;
    v3 = v3 * 7;
    v1 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

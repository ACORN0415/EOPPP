int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 16;
    int v2 = 28;
    int v3 = 74;
    int v4 = 74;
    int v5 = 72;
    int v6 = 87;
    int i;
    v6 = v6 - v0;
    for (i = 0; i < 17; i++) {
        v5 = v5 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

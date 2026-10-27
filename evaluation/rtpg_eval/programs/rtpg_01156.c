int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 33;
    int v2 = 33;
    int v3 = 74;
    int v4 = 100;
    int v5 = 43;
    int i;
    v5 = v5 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

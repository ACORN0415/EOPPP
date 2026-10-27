int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 41;
    int v2 = 33;
    int v3 = 27;
    int v4 = 9;
    int v5 = 44;
    int i;
    v3 = v3 + v5;
    v5 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

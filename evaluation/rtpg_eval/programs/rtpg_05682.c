int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 87;
    int v2 = 22;
    int i;
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

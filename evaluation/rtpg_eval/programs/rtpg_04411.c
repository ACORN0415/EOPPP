int __arr_4411[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 8;
    int v2 = 41;
    int v3 = 22;
    int v4 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_4411[i] = v2 + i; }
    v1 = v1 + v1;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

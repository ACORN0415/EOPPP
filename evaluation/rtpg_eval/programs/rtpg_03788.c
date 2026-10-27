int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 27;
    int v2 = 83;
    int v3 = 79;
    int v4 = 37;
    int v5 = 64;
    int v6 = 27;
    int v7 = 50;
    int i;
    v2 = v2 - v3;
    v5 = 68;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

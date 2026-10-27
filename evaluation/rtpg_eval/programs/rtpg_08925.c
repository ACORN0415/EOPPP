int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 29;
    int v2 = 30;
    int v3 = 81;
    int v4 = 13;
    int v5 = 21;
    int v6 = 44;
    int v7 = 75;
    int i;
    for (i = 0; i < 7; i++) {
        v7 = v7 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

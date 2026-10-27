int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 66;
    int v2 = 5;
    int v3 = 100;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 - v2;
    if (v1 > v3) { v1 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

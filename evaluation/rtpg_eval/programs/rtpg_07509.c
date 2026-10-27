int __arr_7509[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 62;
    int v2 = 51;
    int v3 = 78;
    int v4 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_7509[i] = v2 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

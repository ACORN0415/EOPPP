int __arr_4066[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 86;
    int v2 = 13;
    int v3 = 44;
    int v4 = 91;
    int v5 = 78;
    int i;
    v5 = v5 * 4;
    for (i = 0; i < 10; i++) { __arr_4066[i] = v4 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

int __arr_6533[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 46;
    int v2 = 15;
    int v3 = 68;
    int v4 = 40;
    int v5 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_6533[i] = v3 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }

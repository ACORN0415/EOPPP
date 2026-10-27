int __arr_5755[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 41;
    int v2 = 23;
    int v3 = 65;
    int v4 = 58;
    int v5 = 99;
    int v6 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_5755[i] = v4 + i; }
    v6 = v6 - v4;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int __arr_2873[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 95;
    int v2 = 54;
    int v3 = 53;
    int v4 = 47;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 10; i++) { __arr_2873[i] = v4 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v3 = v3 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }

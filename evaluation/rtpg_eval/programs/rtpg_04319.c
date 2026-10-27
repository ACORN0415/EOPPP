int __arr_4319[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 80;
    int v2 = 62;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_4319[i] = v0 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

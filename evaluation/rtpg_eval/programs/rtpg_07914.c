int __arr_7914[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 2;
    int v2 = 37;
    int v3 = 9;
    int v4 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_7914[i] = v3 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

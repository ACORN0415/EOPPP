int __arr_9276[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 91;
    int v2 = 39;
    int v3 = 54;
    int v4 = 8;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_9276[i] = v0 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = v2 ^ v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

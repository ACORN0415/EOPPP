int __arr_2379[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 7;
    int v2 = 74;
    int v3 = 18;
    int v4 = 30;
    int v5 = 72;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v3;
    }
    v0 = v0 * 6;
    for (i = 0; i < 10; i++) { __arr_2379[i] = v2 + i; }
    int *__p = &v5;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int __arr_3982[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 53;
    int v2 = 69;
    int v3 = 21;
    int v4 = 22;
    int v5 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_3982[i] = v0 + i; }
    for (i = 0; i < 11; i++) {
        v3 = v3 + v4;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    v3 = v3 & v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

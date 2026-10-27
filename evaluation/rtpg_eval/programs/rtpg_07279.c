int __arr_7279[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 49;
    int v2 = 48;
    int v3 = 16;
    int v4 = 56;
    int v5 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_7279[i] = v1 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

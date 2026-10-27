int __arr_4915[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 91;
    int v2 = 1;
    int v3 = 87;
    int v4 = 4;
    int i;
    for (i = 0; i < 10; i++) { __arr_4915[i] = v1 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v3 = v3 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

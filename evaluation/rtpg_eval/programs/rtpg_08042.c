int __arr_8042[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 59;
    int v2 = 85;
    int v3 = 50;
    int i;
    v3 = 22;
    for (i = 0; i < 10; i++) { __arr_8042[i] = v2 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

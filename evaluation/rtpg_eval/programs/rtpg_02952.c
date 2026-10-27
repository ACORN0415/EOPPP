int __arr_2952[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 55;
    int v2 = 84;
    int v3 = 74;
    int v4 = 44;
    int i;
    v0 = v0 + v3;
    v2 = 34;
    for (i = 0; i < 10; i++) { __arr_2952[i] = v0 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

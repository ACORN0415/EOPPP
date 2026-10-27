int __arr_2927[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 0;
    int v2 = 100;
    int v3 = 25;
    int v4 = 91;
    int i;
    for (i = 0; i < 10; i++) { __arr_2927[i] = v2 + i; }
    v4 = v4 | v3;
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

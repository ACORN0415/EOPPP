int test_func(void) {
    int v0 = 4;
    int v1 = 52;
    int v2 = 43;
    int i;
    v0 = 48;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 * 5;
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

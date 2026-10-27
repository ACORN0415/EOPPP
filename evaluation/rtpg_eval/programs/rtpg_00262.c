int test_func(void) {
    int v0 = 52;
    int v1 = 65;
    int v2 = 29;
    int v3 = 23;
    int v4 = 37;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v1;
    }
    v2 = v2 - v1;
    int *__p = &v3;
    *__p = *__p + 1;
    v4 = v4 % (v1 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

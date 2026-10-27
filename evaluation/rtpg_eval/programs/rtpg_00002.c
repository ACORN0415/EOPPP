int test_func(void) {
    int v0 = 25;
    int v1 = 27;
    int v2 = 90;
    int v3 = 79;
    int i;
    v1 = v1 - v2;
    v2 = v2 & v0;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

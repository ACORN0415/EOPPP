int test_func(void) {
    int v0 = 85;
    int v1 = 93;
    int v2 = 68;
    int i;
    v0 = 7;
    int *__p = &v1;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

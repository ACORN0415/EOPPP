int test_func(void) {
    int v0 = 69;
    int v1 = 80;
    int v2 = 37;
    int v3 = 83;
    int v4 = 25;
    int v5 = 13;
    int v6 = 4;
    int v7 = 85;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

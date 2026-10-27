int test_func(void) {
    int v0 = 83;
    int v1 = 43;
    int v2 = 96;
    int v3 = 50;
    int v4 = 9;
    int i;
    if (v4 > v1) { v4 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

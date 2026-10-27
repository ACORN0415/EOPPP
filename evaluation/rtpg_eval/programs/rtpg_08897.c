int test_func(void) {
    int v0 = 66;
    int v1 = 44;
    int v2 = 18;
    int v3 = 7;
    int v4 = 67;
    int v5 = 49;
    int v6 = 25;
    int v7 = 58;
    int i;
    if (v5 > v2) { v5 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    int *__p = &v3;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

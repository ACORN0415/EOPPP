int test_func(void) {
    int v0 = 93;
    int v1 = 88;
    int v2 = 88;
    int v3 = 76;
    int v4 = 22;
    int i;
    if (v2 > v1) { v2 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

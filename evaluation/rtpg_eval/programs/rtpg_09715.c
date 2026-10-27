int test_func(void) {
    int v0 = 76;
    int v1 = 14;
    int v2 = 62;
    int v3 = 46;
    int v4 = 86;
    int v5 = 83;
    int i;
    if (v0 > v5) { v0 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

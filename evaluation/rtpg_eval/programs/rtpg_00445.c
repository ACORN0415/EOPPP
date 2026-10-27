int test_func(void) {
    int v0 = 78;
    int v1 = 22;
    int v2 = 85;
    int v3 = 99;
    int v4 = 70;
    int v5 = 31;
    int i;
    v2 = v2 + v4;
    if (v2 > v4) { v2 = v4; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

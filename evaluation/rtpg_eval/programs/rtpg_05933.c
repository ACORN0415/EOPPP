int test_func(void) {
    int v0 = 14;
    int v1 = 73;
    int v2 = 0;
    int v3 = 76;
    int v4 = 76;
    int i;
    if (v0 > v3) { v0 = v3; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

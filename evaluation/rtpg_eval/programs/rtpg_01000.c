int test_func(void) {
    int v0 = 52;
    int v1 = 55;
    int v2 = 57;
    int v3 = 26;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = 57;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

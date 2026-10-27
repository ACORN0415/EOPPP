int test_func(void) {
    int v0 = 66;
    int v1 = 57;
    int v2 = 78;
    int v3 = 35;
    int i;
    if (v0 > v2) { v0 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

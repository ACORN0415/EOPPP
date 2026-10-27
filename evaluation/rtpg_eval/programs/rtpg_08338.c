int test_func(void) {
    int v0 = 26;
    int v1 = 57;
    int v2 = 13;
    int v3 = 13;
    int v4 = 57;
    int v5 = 21;
    int i;
    if (v3 > v2) { v3 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

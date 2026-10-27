int test_func(void) {
    int v0 = 96;
    int v1 = 7;
    int v2 = 62;
    int v3 = 97;
    int v4 = 57;
    int v5 = 58;
    int i;
    v5 = v5 * 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

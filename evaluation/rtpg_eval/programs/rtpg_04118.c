int test_func(void) {
    int v0 = 14;
    int v1 = 54;
    int v2 = 38;
    int v3 = 88;
    int i;
    v3 = 35;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

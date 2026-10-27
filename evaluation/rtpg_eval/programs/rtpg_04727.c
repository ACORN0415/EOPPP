int test_func(void) {
    int v0 = 32;
    int v1 = 14;
    int v2 = 79;
    int v3 = 67;
    int v4 = 17;
    int i;
    v3 = 11;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

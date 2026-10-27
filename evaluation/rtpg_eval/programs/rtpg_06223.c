int test_func(void) {
    int v0 = 31;
    int v1 = 17;
    int v2 = 92;
    int v3 = 82;
    int v4 = 73;
    int i;
    v4 = 18;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

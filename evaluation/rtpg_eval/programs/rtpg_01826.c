int test_func(void) {
    int v0 = 77;
    int v1 = 96;
    int v2 = 89;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 58;
    int v1 = 11;
    int v2 = 55;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

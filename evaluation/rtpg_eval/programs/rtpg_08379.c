int test_func(void) {
    int v0 = 24;
    int v1 = 76;
    int v2 = 99;
    int i;
    v2 = v2 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 100;
    int v1 = 74;
    int v2 = 99;
    int v3 = 70;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

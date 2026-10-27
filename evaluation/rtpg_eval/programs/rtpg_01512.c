int test_func(void) {
    int v0 = 81;
    int v1 = 48;
    int v2 = 38;
    int i;
    v2 = 78;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

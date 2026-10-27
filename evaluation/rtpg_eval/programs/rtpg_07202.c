int test_func(void) {
    int v0 = 19;
    int v1 = 81;
    int v2 = 77;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v0 = v0 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }

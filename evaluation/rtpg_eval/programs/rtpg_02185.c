int test_func(void) {
    int v0 = 43;
    int v1 = 40;
    int v2 = 96;
    int i;
    v2 = 57;
    v2 = v2 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

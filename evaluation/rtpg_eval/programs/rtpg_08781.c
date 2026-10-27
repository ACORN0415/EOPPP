int test_func(void) {
    int v0 = 79;
    int v1 = 48;
    int v2 = 61;
    int i;
    v1 = 14;
    v1 = v1 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

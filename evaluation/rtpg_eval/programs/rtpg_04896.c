int test_func(void) {
    int v0 = 41;
    int v1 = 10;
    int v2 = 65;
    int v3 = 76;
    int i;
    v1 = 73;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 85;
    int v1 = 37;
    int v2 = 97;
    int i;
    v1 = v1 - v0;
    v1 = v1 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 4;
    int v1 = 60;
    int v2 = 93;
    int v3 = 9;
    int i;
    v3 = v3 - v1;
    v0 = v0 * 10;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

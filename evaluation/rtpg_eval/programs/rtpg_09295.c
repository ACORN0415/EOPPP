int test_func(void) {
    int v0 = 44;
    int v1 = 4;
    int v2 = 67;
    int v3 = 60;
    int i;
    v1 = v1 - v3;
    v0 = v0 * 9;
    v2 = v2 + v1;
    v1 = v1 % (v3 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

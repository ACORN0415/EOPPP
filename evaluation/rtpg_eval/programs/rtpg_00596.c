int test_func(void) {
    int v0 = 34;
    int v1 = 34;
    int v2 = 59;
    int v3 = 93;
    int i;
    v3 = 25;
    v1 = v1 * 3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

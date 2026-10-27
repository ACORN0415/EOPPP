int test_func(void) {
    int v0 = 60;
    int v1 = 20;
    int v2 = 89;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 * 5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

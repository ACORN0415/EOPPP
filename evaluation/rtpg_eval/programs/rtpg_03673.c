int test_func(void) {
    int v0 = 4;
    int v1 = 69;
    int v2 = 59;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v0;
    }
    v1 = v1 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

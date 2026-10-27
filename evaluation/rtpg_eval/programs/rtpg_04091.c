int test_func(void) {
    int v0 = 25;
    int v1 = 59;
    int v2 = 74;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 16; i++) {
        v2 = v2 + v0;
    }
    v1 = v1 - v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

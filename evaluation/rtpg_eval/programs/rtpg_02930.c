int test_func(void) {
    int v0 = 80;
    int v1 = 45;
    int v2 = 9;
    int v3 = 19;
    int v4 = 22;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v4;
    }
    v3 = v3 + v1;
    v1 = 94;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

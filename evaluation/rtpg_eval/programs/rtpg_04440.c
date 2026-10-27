int test_func(void) {
    int v0 = 32;
    int v1 = 20;
    int v2 = 66;
    int v3 = 61;
    int v4 = 66;
    int i;
    v4 = v4 - v0;
    v4 = v4 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

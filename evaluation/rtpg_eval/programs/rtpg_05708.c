int test_func(void) {
    int v0 = 49;
    int v1 = 51;
    int v2 = 8;
    int i;
    v0 = v0 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

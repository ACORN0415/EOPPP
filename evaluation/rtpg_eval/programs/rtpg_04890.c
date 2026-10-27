int test_func(void) {
    int v0 = 35;
    int v1 = 54;
    int v2 = 1;
    int v3 = 67;
    int v4 = 25;
    int v5 = 30;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v3;
    }
    v5 = v5 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 44;
    int v1 = 41;
    int v2 = 70;
    int v3 = 36;
    int v4 = 41;
    int v5 = 30;
    int v6 = 49;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v2;
    }
    v3 = v3 + v2;
    v5 = v5 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

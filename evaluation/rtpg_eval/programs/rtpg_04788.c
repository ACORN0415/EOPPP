int test_func(void) {
    int v0 = 63;
    int v1 = 66;
    int v2 = 55;
    int v3 = 58;
    int v4 = 7;
    int v5 = 68;
    int i;
    v3 = v3 + v2;
    v0 = v0 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

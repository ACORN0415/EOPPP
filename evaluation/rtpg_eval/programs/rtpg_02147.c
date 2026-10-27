int test_func(void) {
    int v0 = 90;
    int v1 = 45;
    int v2 = 84;
    int v3 = 16;
    int v4 = 89;
    int i;
    v1 = v1 * 3;
    v3 = v3 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 36;
    int v1 = 64;
    int v2 = 87;
    int v3 = 16;
    int i;
    v0 = v0 * 10;
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

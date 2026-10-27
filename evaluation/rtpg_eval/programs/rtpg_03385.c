int test_func(void) {
    int v0 = 21;
    int v1 = 87;
    int v2 = 46;
    int v3 = 66;
    int v4 = 67;
    int v5 = 94;
    int i;
    v0 = v0 * 10;
    v0 = v0 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    int *__p = &v5;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

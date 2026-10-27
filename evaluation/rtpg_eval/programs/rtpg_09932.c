int test_func(void) {
    int v0 = 29;
    int v1 = 50;
    int v2 = 8;
    int v3 = 65;
    int v4 = 63;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

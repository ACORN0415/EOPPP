int test_func(void) {
    int v0 = 22;
    int v1 = 11;
    int v2 = 67;
    int v3 = 59;
    int v4 = 66;
    int v5 = 7;
    int i;
    v5 = v5 + v3;
    v1 = v1 - v5;
    v4 = 24;
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 25;
    int v1 = 100;
    int v2 = 100;
    int v3 = 57;
    int v4 = 52;
    int v5 = 68;
    int i;
    v5 = v5 - v1;
    v5 = 94;
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

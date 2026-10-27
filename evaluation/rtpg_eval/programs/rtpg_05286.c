int test_func(void) {
    int v0 = 84;
    int v1 = 52;
    int v2 = 86;
    int v3 = 70;
    int v4 = 10;
    int v5 = 30;
    int v6 = 38;
    int v7 = 80;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v4;
    }
    v5 = v5 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }

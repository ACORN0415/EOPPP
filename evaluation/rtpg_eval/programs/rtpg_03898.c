int test_func(void) {
    int v0 = 17;
    int v1 = 39;
    int v2 = 70;
    int v3 = 7;
    int v4 = 8;
    int v5 = 2;
    int v6 = 73;
    int v7 = 13;
    int i;
    v2 = v2 - v5;
    if (v6 > v7) { v6 = v7; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 49;
    int v1 = 14;
    int v2 = 46;
    int v3 = 88;
    int v4 = 88;
    int v5 = 23;
    int v6 = 34;
    int v7 = 58;
    int i;
    v1 = v1 + v1;
    if (v7 > v4) { v7 = v4; }
    int *__p = &v5;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }

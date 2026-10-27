int test_func(void) {
    int v0 = 93;
    int v1 = 63;
    int v2 = 31;
    int v3 = 89;
    int v4 = 34;
    int v5 = 62;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 6; i++) {
        v5 = v5 + v5;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

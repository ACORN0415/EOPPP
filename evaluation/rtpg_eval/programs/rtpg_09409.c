int test_func(void) {
    int v0 = 68;
    int v1 = 72;
    int v2 = 10;
    int v3 = 95;
    int v4 = 72;
    int v5 = 49;
    int i;
    v2 = v2 * 9;
    int *__p = &v4;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

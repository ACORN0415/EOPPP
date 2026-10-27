int test_func(void) {
    int v0 = 96;
    int v1 = 35;
    int v2 = 59;
    int v3 = 51;
    int v4 = 12;
    int v5 = 34;
    int v6 = 83;
    int v7 = 78;
    int i;
    v4 = v4 * 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

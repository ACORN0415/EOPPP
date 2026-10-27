int test_func(void) {
    int v0 = 24;
    int v1 = 90;
    int v2 = 66;
    int v3 = 9;
    int v4 = 66;
    int v5 = 48;
    int v6 = 17;
    int v7 = 16;
    int i;
    for (i = 0; i < 5; i++) {
        v6 = v6 + v0;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }

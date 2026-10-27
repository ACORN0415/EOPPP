int test_func(void) {
    int v0 = 2;
    int v1 = 2;
    int v2 = 51;
    int i;
    v1 = 29;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v0;
    }
    v2 = v2 * 7;
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

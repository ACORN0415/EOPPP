int test_func(void) {
    int v0 = 41;
    int v1 = 99;
    int v2 = 74;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

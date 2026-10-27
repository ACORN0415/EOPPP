int test_func(void) {
    int v0 = 37;
    int v1 = 12;
    int v2 = 11;
    int i;
    v0 = v0 * 4;
    v1 = v1 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

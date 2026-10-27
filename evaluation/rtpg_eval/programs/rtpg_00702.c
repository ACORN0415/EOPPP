int test_func(void) {
    int v0 = 41;
    int v1 = 84;
    int v2 = 34;
    int v3 = 36;
    int i;
    v2 = v2 * 7;
    v3 = v3 - v1;
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

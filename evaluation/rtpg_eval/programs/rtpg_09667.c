int test_func(void) {
    int v0 = 37;
    int v1 = 41;
    int v2 = 46;
    int v3 = 80;
    int v4 = 39;
    int v5 = 4;
    int i;
    v3 = 96;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

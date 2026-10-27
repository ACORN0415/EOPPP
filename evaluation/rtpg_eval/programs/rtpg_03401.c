int test_func(void) {
    int v0 = 82;
    int v1 = 88;
    int v2 = 2;
    int v3 = 20;
    int v4 = 44;
    int v5 = 39;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v5;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

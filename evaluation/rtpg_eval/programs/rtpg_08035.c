int test_func(void) {
    int v0 = 35;
    int v1 = 61;
    int v2 = 85;
    int v3 = 86;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 48;
    int v1 = 24;
    int v2 = 50;
    int v3 = 87;
    int v4 = 1;
    int v5 = 55;
    int v6 = 73;
    int i;
    v4 = v4 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

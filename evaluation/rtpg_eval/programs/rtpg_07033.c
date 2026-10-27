int test_func(void) {
    int v0 = 86;
    int v1 = 23;
    int v2 = 1;
    int v3 = 81;
    int v4 = 1;
    int v5 = 79;
    int v6 = 95;
    int v7 = 95;
    int i;
    v6 = v6 - v3;
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

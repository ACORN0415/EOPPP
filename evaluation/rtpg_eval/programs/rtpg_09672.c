int test_func(void) {
    int v0 = 57;
    int v1 = 2;
    int v2 = 68;
    int v3 = 75;
    int v4 = 52;
    int v5 = 84;
    int v6 = 1;
    int i;
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 51;
    int v1 = 8;
    int v2 = 35;
    int v3 = 34;
    int v4 = 25;
    int v5 = 50;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v3;
    }
    v3 = v3 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

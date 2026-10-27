int test_func(void) {
    int v0 = 82;
    int v1 = 29;
    int v2 = 18;
    int v3 = 93;
    int v4 = 6;
    int v5 = 95;
    int v6 = 39;
    int v7 = 31;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

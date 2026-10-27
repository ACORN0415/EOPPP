int test_func(void) {
    int v0 = 19;
    int v1 = 46;
    int v2 = 18;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v2 = v2 | v1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

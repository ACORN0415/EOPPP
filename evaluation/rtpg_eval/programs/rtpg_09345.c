int test_func(void) {
    int v0 = 36;
    int v1 = 11;
    int v2 = 92;
    int i;
    v2 = v2 * 10;
    v1 = 48;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 ^ v0;
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

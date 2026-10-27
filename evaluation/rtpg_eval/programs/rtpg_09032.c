int test_func(void) {
    int v0 = 88;
    int v1 = 15;
    int v2 = 93;
    int v3 = 97;
    int v4 = 39;
    int v5 = 35;
    int v6 = 57;
    int i;
    if (v0 > v6) { v0 = v6; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

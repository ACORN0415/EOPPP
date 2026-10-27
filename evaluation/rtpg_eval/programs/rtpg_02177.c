int test_func(void) {
    int v0 = 78;
    int v1 = 57;
    int v2 = 79;
    int v3 = 16;
    int v4 = 13;
    int v5 = 8;
    int i;
    v4 = v4 + v1;
    if (v4 > v3) { v4 = v3; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 17;
    int v1 = 76;
    int v2 = 93;
    int v3 = 59;
    int v4 = 78;
    int v5 = 0;
    int v6 = 98;
    int i;
    v6 = v6 * 5;
    v1 = 59;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

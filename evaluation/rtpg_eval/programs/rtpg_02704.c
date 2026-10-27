int test_func(void) {
    int v0 = 59;
    int v1 = 93;
    int v2 = 39;
    int v3 = 81;
    int i;
    v2 = v2 * 9;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

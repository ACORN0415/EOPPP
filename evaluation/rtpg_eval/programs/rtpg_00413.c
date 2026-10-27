int test_func(void) {
    int v0 = 44;
    int v1 = 71;
    int v2 = 10;
    int v3 = 56;
    int v4 = 31;
    int v5 = 17;
    int v6 = 91;
    int v7 = 59;
    int i;
    v5 = 85;
    int *__p = &v6;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

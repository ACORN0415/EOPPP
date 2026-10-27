int test_func(void) {
    int v0 = 5;
    int v1 = 17;
    int v2 = 73;
    int v3 = 59;
    int v4 = 55;
    int v5 = 62;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 5; i++) {
        v2 = v2 + v3;
    }
    v3 = v3 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

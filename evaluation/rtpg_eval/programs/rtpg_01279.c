int test_func(void) {
    int v0 = 51;
    int v1 = 77;
    int v2 = 3;
    int v3 = 72;
    int v4 = 7;
    int v5 = 7;
    int v6 = 77;
    int v7 = 38;
    int i;
    v4 = 46;
    if (v3 > v2) { v3 = v2; }
    v5 = v5 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }

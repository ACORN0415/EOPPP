int test_func(void) {
    int v0 = 97;
    int v1 = 76;
    int v2 = 66;
    int v3 = 60;
    int v4 = 88;
    int v5 = 16;
    int v6 = 57;
    int v7 = 44;
    int i;
    v3 = 90;
    v3 = v3 * 3;
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

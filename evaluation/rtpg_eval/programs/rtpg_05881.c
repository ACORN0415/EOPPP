int test_func(void) {
    int v0 = 4;
    int v1 = 10;
    int v2 = 95;
    int v3 = 66;
    int v4 = 67;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v3;
    }
    if (v0 > v3) { v0 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

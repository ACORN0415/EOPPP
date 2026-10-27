int test_func(void) {
    int v0 = 84;
    int v1 = 49;
    int v2 = 87;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 9; i++) {
        v1 = v1 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

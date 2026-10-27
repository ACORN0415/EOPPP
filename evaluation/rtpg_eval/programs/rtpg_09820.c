int test_func(void) {
    int v0 = 98;
    int v1 = 56;
    int v2 = 54;
    int v3 = 60;
    int v4 = 61;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

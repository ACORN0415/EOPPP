int test_func(void) {
    int v0 = 98;
    int v1 = 52;
    int v2 = 92;
    int v3 = 29;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    v0 = v0 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

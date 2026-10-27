int test_func(void) {
    int v0 = 30;
    int v1 = 56;
    int v2 = 92;
    int v3 = 50;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 68;
    int v1 = 83;
    int v2 = 53;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    v0 = 64;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

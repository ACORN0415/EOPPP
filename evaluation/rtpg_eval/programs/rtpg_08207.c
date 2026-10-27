int test_func(void) {
    int v0 = 77;
    int v1 = 4;
    int v2 = 99;
    int v3 = 34;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

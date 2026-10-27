int test_func(void) {
    int v0 = 81;
    int v1 = 86;
    int v2 = 60;
    int v3 = 30;
    int i;
    v1 = 4;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

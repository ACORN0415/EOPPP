int test_func(void) {
    int v0 = 60;
    int v1 = 17;
    int v2 = 68;
    int v3 = 36;
    int v4 = 60;
    int v5 = 45;
    int i;
    v5 = v5 * 9;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

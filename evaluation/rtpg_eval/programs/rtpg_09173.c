int test_func(void) {
    int v0 = 6;
    int v1 = 60;
    int v2 = 90;
    int v3 = 66;
    int v4 = 31;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

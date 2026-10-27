int test_func(void) {
    int v0 = 71;
    int v1 = 16;
    int v2 = 55;
    int v3 = 59;
    int v4 = 49;
    int i;
    v0 = v0 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

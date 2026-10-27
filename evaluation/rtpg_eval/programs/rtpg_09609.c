int test_func(void) {
    int v0 = 58;
    int v1 = 94;
    int v2 = 50;
    int v3 = 46;
    int v4 = 13;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 94;
    int v1 = 30;
    int v2 = 47;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 - v2;
    v2 = v2 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

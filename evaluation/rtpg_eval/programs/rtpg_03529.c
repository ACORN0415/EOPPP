int test_func(void) {
    int v0 = 69;
    int v1 = 96;
    int v2 = 78;
    int i;
    v0 = v0 + v2;
    v2 = 98;
    v0 = v0 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

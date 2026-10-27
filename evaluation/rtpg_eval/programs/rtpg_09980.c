int test_func(void) {
    int v0 = 93;
    int v1 = 27;
    int v2 = 90;
    int i;
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

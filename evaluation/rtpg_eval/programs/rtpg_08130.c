int test_func(void) {
    int v0 = 52;
    int v1 = 58;
    int v2 = 50;
    int i;
    v0 = v0 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

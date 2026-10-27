int test_func(void) {
    int v0 = 78;
    int v1 = 89;
    int v2 = 48;
    int i;
    if (v2 > v1) { v2 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

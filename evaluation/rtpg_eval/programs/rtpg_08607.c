int test_func(void) {
    int v0 = 37;
    int v1 = 19;
    int v2 = 18;
    int v3 = 78;
    int v4 = 59;
    int v5 = 25;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

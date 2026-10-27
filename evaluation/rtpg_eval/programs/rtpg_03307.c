int test_func(void) {
    int v0 = 86;
    int v1 = 22;
    int v2 = 75;
    int v3 = 50;
    int v4 = 67;
    int v5 = 86;
    int v6 = 65;
    int v7 = 79;
    int i;
    v3 = 92;
    v1 = v1 + v6;
    int *__p = &v7;
    *__p = *__p + 1;
    v3 = v3 % (v4 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

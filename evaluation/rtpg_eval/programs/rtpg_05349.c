int __arr_5349[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 67;
    int v2 = 10;
    int v3 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_5349[i] = v0 + i; }
    if (v1 > v2) { v1 = v2; }
    v2 = v2 + v3;
    v0 = v0 % (v2 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

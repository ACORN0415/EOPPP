int __arr_5732[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 49;
    int v2 = 16;
    int v3 = 71;
    int i;
    v3 = v3 * 4;
    for (i = 0; i < 10; i++) { __arr_5732[i] = v1 + i; }
    v2 = v2 % (v0 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

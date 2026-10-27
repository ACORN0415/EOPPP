int __arr_7165[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 17;
    int v2 = 34;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_7165[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

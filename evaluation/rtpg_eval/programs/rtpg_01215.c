int __arr_1215[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 17;
    int v2 = 22;
    int v3 = 54;
    int v4 = 28;
    int v5 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_1215[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

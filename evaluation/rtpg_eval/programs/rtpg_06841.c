int __arr_6841[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 68;
    int v2 = 71;
    int v3 = 46;
    int v4 = 49;
    int v5 = 66;
    int v6 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_6841[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

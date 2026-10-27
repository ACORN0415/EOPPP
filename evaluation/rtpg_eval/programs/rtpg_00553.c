int __arr_553[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 55;
    int v2 = 10;
    int v3 = 50;
    int v4 = 20;
    int i;
    if (v4 > v3) { v4 = v3; }
    for (i = 0; i < 10; i++) { __arr_553[i] = v2 + i; }
    for (i = 0; i < 12; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

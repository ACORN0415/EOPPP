int test_func(void) {
    int v0 = 80;
    int v1 = 8;
    int v2 = 60;
    int v3 = 37;
    int v4 = 100;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 17; i++) {
        v4 = v4 + v3;
    }
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }

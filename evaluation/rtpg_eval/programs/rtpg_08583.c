int test_func(void) {
    int v0 = 25;
    int v1 = 51;
    int v2 = 60;
    int v3 = 7;
    int v4 = 66;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    if (v3 > v2) { v3 = v2; }
    v1 = v1 + v0;
    v3 = v3 * 3;
    return v0;
}
int main(void) { return test_func(); }

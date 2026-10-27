int test_func(void) {
    int v0 = 70;
    int v1 = 72;
    int v2 = 98;
    int v3 = 60;
    int v4 = 31;
    int i;
    v3 = v3 * 2;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }

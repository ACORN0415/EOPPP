int test_func(void) {
    int v0 = 83;
    int v1 = 50;
    int v2 = 59;
    int v3 = 18;
    int v4 = 46;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v1;
    }
    v0 = v0 * 4;
    return v0;
}
int main(void) { return test_func(); }

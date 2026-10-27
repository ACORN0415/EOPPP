int test_func(void) {
    int v0 = 21;
    int v1 = 63;
    int v2 = 5;
    int v3 = 96;
    int i;
    v1 = v1 + v3;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 68;
    int v1 = 5;
    int v2 = 66;
    int i;
    v2 = v2 * 10;
    v1 = 85;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

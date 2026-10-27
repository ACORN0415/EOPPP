int test_func(void) {
    int v0 = 55;
    int v1 = 72;
    int v2 = 75;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

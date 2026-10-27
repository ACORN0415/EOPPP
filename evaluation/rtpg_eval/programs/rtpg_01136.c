int test_func(void) {
    int v0 = 100;
    int v1 = 28;
    int v2 = 90;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    v0 = 26;
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
